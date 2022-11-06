/*
Find Number of ways in which n friends can remain
single or can be paired up.
*/
#include "bits/stdc++.h"

int pair(int n){
    if(n == 0 || n == 1 || n == 2) return n;
    return pair(n-1) + pair(n-2)*(n-1);
}

int main(){
    int n = 4;
    int ans = pair(n);
    std::cout<<ans;
}