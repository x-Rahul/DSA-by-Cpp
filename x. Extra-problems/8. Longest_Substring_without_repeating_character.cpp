// Longest Substring without Reapeating Character
/*
Given a string s, find the length of the  longest substring without repeating characer

input : s = "abcabcbb"
Output : 3
*/

#include "bits/stdc++.h"
using namespace std;

int main(){

    string s; cin>>s;
    vector<int> dict(256, -1); // create vector of 256 elements of -1

    int mxlen = 0, start = -1;
    for(int i = 0; i < s.length(); i++){
        if(dict[s[i]] > start) // if old posn greater than start
            start = dict[s[i]];
        dict[s[i]] = i;
        mxlen = max(mxlen, i-start);
    }
    cout<<mxlen;
    return 0;
}
