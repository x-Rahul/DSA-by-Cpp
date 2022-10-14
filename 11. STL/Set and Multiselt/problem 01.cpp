/*

Given N strings
Print unique strings in lexiographical order.

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
#include "unordered_map"
using namespace std;

int main(){

    set<string> s;
    unordered_set<string> s2; // order does not matter

    int n;cin>>n;
    for(int i = 0; i<n; i++){
        string str; cin>>str;
        s.insert(str);
        s2.insert(str);
    }
    
    for (auto i: s) cout<<i << " ";
    cout<<endl;
    for (auto i: s2) cout<<i << " ";
    return 0;
}