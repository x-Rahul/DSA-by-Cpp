#include "bits/stdc++.h"
using namespace std;

int countWays(int s, int e){
    if(s == e) return 1;
    if(s > e) return 0;

    int rest = 0;
    
    for (int i = 1; i<= 6; i++){
        rest += countWays(s+i, e);
    }
    cout<<rest<<" ";
    return rest;
}

int main(){
    cout<<countWays(0,3);
}