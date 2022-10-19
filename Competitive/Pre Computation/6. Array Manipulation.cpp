#include "bits/stdc++.h"
using namespace std;

const int N = 1e7+10;
long long Arr[N];
long long HashArr[N];

int main(){
    int n, q; cin>>n>>q;
    while(q--){
        int a,b, k; cin>>a>>b>>k;

        Arr[a] += k; 
        Arr[b+1] -= k;
    }

    //----------------
    // prefix sum
    for(int i = 1; i<=n; i++){
        Arr[i] += Arr[i-1];
    }

    //----------------

    long long mx = -1;
    for(int i = 1; i<=n; i++){
        mx = max(mx, Arr[i]);
    }
    cout<<mx;
}