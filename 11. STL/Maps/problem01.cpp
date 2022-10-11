/*

Given N strings, print unique strings in 
lexiographical order(increasing) with their frequency.
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

*/

#include "bits/stdc++.h"
using namespace std;

int main(){

    int n;cin>>n;
    map<string, int> mp; // Map stores keys in sorted order

    for(int i = 0; i<n; i++) {
        string s; cin>>s;
        mp[s]++; // stores count or frequency of the string
    }

    for(auto &i:mp) cout<< i.first<<" " << i.second<<endl;
    return 0;
}