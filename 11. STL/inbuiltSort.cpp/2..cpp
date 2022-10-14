#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for (auto &i : v) cin>> i;

    // Method 1: n sq sort

    // for(int i = 0; i< n; ++i){
    //     for(int j = i+1; j<n; ++j){
    //         if(v[j]<v[i]) swap(v[i], v[j]); // increasing order
    //         //if(v[j]>v[i]) swap(v[i], v[j]); // decresing order
    //     }
    // }

    // Method 2: inbuilt sort
    sort(v.begin(), v.end());
    // sort(v.rbegin(), v.rend());

    // Method 3: using comparators
    for(auto i: v) cout<< i<< " ";
}