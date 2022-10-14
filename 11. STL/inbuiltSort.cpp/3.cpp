#include <bits/stdc++.h>
using namespace std;



bool myComaparator(int a, int b){
    if(a > b) return true;
    else return false;
}

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for (auto &i : v) cin>> i;

    // Method 1: n sq sort

    for(int i = 0; i< n; ++i){
        for(int j = i+1; j<n; ++j){
            if(myComaparator(v[i], v[j])) swap(v[i], v[j]); 
        }
    }

    for(auto i: v) cout<< i<< " ";
}