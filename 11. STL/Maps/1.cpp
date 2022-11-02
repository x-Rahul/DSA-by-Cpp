#include "bits/stdc++.h"
using namespace std;

int main(){

    map<int, string> mp;

    mp[1] = "abc"; // O(log(n))
    mp[5] = "cdc";
    mp[3] = "acd";
    mp.insert({4, "afg"}); // O(log(n))
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout<< it->first << " "<< it->second << endl;
    }
    cout<< "\n";
    for(auto &pr:mp) cout<< pr.first<<" " << pr.second<<endl;
    return 0;
}