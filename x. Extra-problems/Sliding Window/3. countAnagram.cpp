#include "bits/stdc++.h"
using namespace std;

int main(){
    string s = "aabaabaa";
    string keyS = "aaba";
    
    pair<int,int> map;
    map.first = 3;
    map.second = 1;
    int count = 2;
    int ans = 0;

    int start = 0, end = 0;

    while (end<s.length())
    {
        if(s[end] == map.first) map.first --;
        if(s[end] == map.second) map.second --;
        if(map.first == 0 or map.second == 0) count--;

        if(end-start+1 < keyS.length()) end++;
        else{
            // ans----
            if(count == 0) ans += 1;
            
            if(s[start] == map.first) map.first ++;
            if(s[start] == map.second) map.second ++;
            //------
            start++;end++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
