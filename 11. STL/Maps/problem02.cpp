/*

Given N strings, and Q queries. In each query you are given a string.
Print unique strings  with their frequency.

N<= 10^5
|S| <= 100

input :
8
abc
def
abc
ghj
jkl
ghj
ghj
abc

2
abc
ghj

*/

#include "bits/stdc++.h"
#include "unordered_map"
using namespace std;

int main(){

     // unordered_map stores keys in sorted order
    unordered_map<string, int> mp;
    int n;cin>>n;
    for(int i = 0; i<n; i++) {
        string s; cin>>s;
        mp[s]++; // stores count or frequency of the string
    }
    for(auto &i:mp) cout<< i.first<<" " << i.second<<endl;

    int q; cin >> q;
    while (q--)
    {
        string s; cin>>s;
        cout<< mp[s] << endl;
    }
    
    return 0;
}