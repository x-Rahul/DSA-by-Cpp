#include "bits/stdc++.h"
using namespace std;

int main(){

    set<pair<int, int>>s;
    int q;cin>>q;
    for(int i = 0; i<q; i++){
        int x,y; cin>>x>>y;
        s.insert({x,y});
    }
    for(auto i:s) cout<< i.first <<" "<<i.second<<endl;
    return 0;
}