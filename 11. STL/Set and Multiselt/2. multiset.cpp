#include "bits/stdc++.h"
using namespace std;
int main()
{
    multiset<string> s; // Multiset allow to store duplicate values

    s.insert("abc"); // O(log(n))
    s.insert("zsdf");
    s.insert("bsd");
    s.insert("abc");
    s.insert("jkh");

    // if(s.find("abc") != s.end()) 
    //     s.erase(s.find("abc"));
    
    s.erase("abc");
    
    for(auto i:s) cout<<i<<endl;

    return 0;
}