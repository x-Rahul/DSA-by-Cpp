/*

Substrings / subarrays recursion

*/


#include "bits/stdc++.h"
using namespace std;

void subStrings(string s1, string s2){

    if(s1.empty()) {
        cout<<s2<<endl;
        return;
    }
    
    char c = s1.front();
    string ros = s1.substr(1);
    subStrings(ros, s2);
    s2.push_back(c);
    subStrings(ros, s2);
}

int main(){
    string s1 = "ABC", s2 = "";

    subStrings(s1, s2);
}