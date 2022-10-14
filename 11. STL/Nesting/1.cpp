#include "bits/stdc++.h"
using namespace std;

int main(){

    map<pair<string, string>, vector<int>> mp;

    int T = 3; cin>>T;
    while (T--)
    {
        string s1, s2; cin>>s1>>s2;
        int n; cin>>n;

        vector<int> v(n);
        for(auto &i : v) cin>>i;
        mp.insert({{s1,s2}, v});

                // for(int i = 0; i<n; i++) {
                //     int x;cin>>x;
                //     mp[{s1,s2}].push_back(x);
                // }
    }

    for(auto &i : mp) {
        cout<<i.first.first << " "<< i.first.second << " ";
        
        auto list = i.second;
        cout<<list.size()<<endl;
        for(auto i:list) cout<<i<< " ";
        cout<<endl;
    }  

    return 0;
}
        