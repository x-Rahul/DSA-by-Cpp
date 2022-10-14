#include "bits/stdc++.h"
using namespace std;

int main(){
    int n; cin>>n;
    // int a[n];
    // for (auto &i: a) cin>> i;

    // // sort(a, a+n); // Here a is the starting address and (a+n) is the address of (n-1) i.e next of till where we wants sorting.
    // for(auto i: a) cout<<i<<" ";
    // cout<< endl;

    // sort(a+2, a+5);
    // for(auto i: a) cout<<i<<" ";


    vector<int> v(n);
    for (auto &i:v) cin>>i;

    sort(v.begin() + 2, v.end());
    for(auto &i:v) cout<<i<<" ";

}