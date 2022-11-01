/*

Fibonacci sequence

*/

#include "bits/stdc++.h"
using namespace std;

vector<int> fib(int n){
    vector<int> fibo(n);
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i<n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo;
}

int main(){

    int n; cin>>n;
    vector<int> fibo = fib(n);
    for(auto i: fibo) cout<<i<< " ";
}