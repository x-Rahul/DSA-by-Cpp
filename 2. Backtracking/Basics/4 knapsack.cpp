/*
Put n items with given weight and value in knapsack of capacity W to get the maximum
total value in the knapsack.
*/

/*
weightt(w) <= Total Capacity(W)
value(v) -> Maximum
*/

#include "bits/stdc++.h"

int knapsack(int w[], int v[], int n, int W ){
    if(n == 0 or W == 0) return 0;
    if(w[n-1]> W) return knapsack(w,v, n-1, W);
    return std::max((knapsack(w,v, n-1, W-w[n-1])+ v[n-1]), knapsack(w,v, n-1, W));
}

int main(){
    int w[] = {10,20,30};
    int v[] = {100,50,150};
    int W = 50;
    int n = 3; // number of items with 0 based indexing
    std::cout<< knapsack(w,v,n, W);
}
