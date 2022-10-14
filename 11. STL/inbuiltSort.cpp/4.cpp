#include <bits/stdc++.h>
using namespace std;

// Sorting first array complete and 
// sorting second array where elements of first array are same.


bool myComaparator(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return (a.second < b.second);
    return (a.first > b.first);
}
int main(){
    int n; cin>>n;
    vector<pair<int, int>> v(n);
    for (auto &i : v) cin>> i.first >> i.second;

    // Method 1: n sq sort

    for(int i = 0; i< n; ++i){
        for(int j = i+1; j<n; ++j){
            if(myComaparator(v[i], v[j])) swap(v[i], v[j]); 
        }
    }

    for(auto i: v) cout<< i.first<< " "<< i.second << endl;
}