#include <bits/stdc++.h>
using namespace std;

// Sorting first array complete and 
// sorting second array where elements of first array are same.


bool myComaparator(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return (a.second > b.second);
    return (a.first < b.first);
}

int main(){
    int n; cin>>n;
    vector<pair<int, int>> v(n);
    for (auto &i : v) cin>> i.first >> i.second;

    // Method 2: Using inbuilt swap

    sort(v.begin(), v.end(), myComaparator);

    for(auto i: v) cout<< i.first<< " "<< i.second << endl;
}