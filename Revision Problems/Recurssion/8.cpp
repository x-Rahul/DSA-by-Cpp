/*

Substrings / subarrays recursion

*/


#include "bits/stdc++.h"
using namespace std;

string moveX(string s, char k){
    if(s.empty()) return "";
    char c = s.front();
    string sub = moveX(s.substr(1), k);
    // if(c == k) return sub+c;
    // return c+sub;

    // or
    if(c == k){
        sub.push_back(c);
        return sub;
    }
    return c+sub;
}

int main(){
    string s = "axxbdxcefxhix";
    char k = 'x';
    string ans = moveX(s, k);
    cout<<ans;
}