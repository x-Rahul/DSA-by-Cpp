#include "bits/stdc++.h"
using namespace std;


int main() {
    unordered_map<string, int>  mp;
    
    int Q; cin>>Q;
    while (Q--) {
        int q; cin>>q;
        
        
        if(q == 1){
            string name; cin >>name;
            int marks; cin>>marks;
            if(mp.find(name) == mp.end()) mp[name] = {marks};
            else mp[name] += marks;
            // mp.insert({marks, name});
        }
        
        if(q == 2){
            string name; cin >>name;
            mp[name] = {0};
        }
        
        if(q == 3){
            string name; cin >>name;
            cout<<mp[name] <<endl;
        }
        
    }
}
