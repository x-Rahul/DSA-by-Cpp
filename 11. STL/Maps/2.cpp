#include "bits/stdc++.h"
using namespace std;

void print( map<int,string> &mp){
    for(auto &i:mp) cout<< i.first<<" " << i.second<<endl;
}
int main(){

    map<int, string> mp;

    mp[1] = "abc"; 
    mp[5] = "cdc";
    mp[3] = "acd";
    mp.insert({4, "afg"});

    // mp.find(3) // returns iterator // O(Log(n))
    auto it = mp.find(3); // if 3 not present then it returns mp.end()
    if (it == mp.end()) cout<<" No Value"<<endl;
    else cout<< it->first << " " << it->second<<endl;
    

    auto it = mp.find(4);
    // mp.erase(4); // delete key == 3
    if(it != mp.end()) mp.erase(it);
    

    mp.clear(); // clear the map
    return 0;
}