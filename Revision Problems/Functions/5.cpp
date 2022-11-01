/*

Pascal Triangle : 
    elements are nCr or iCj

input : 5

    1
    11
    121
    1331
    14641
    
*/


#include "bits/stdc++.h"
using namespace std;


int fact(int n){
    if(n <= 1) return 1;
    return n * fact(n-1);
}

int nCr (int n, int r){
    return fact(n) / (fact(r)*fact(n-r)) ;
}

int main(){

    int n; cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<< nCr(i,j);
        }
        cout<<endl;
    }
}