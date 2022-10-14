/*

Given N strings and Q queries. In each query you are given a string.
Print yes if string present else print no.

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

    unordered_set<string> s; // order does not matter

    int n; cin>>n;
    for(int i = 0; i<n; i++){
        string str; cin>>str;
        s.insert(str);
    }
    
    int q; cin>>q;
    while (q--)
    {
        string str; cin>> str;
        if(s.find(str) != s.end()) cout<< "yes" << endl;
        else cout<<"NO" << endl;
    }
    
 
    cout<<endl;
    return 0;
}