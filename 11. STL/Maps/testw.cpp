#include "bits/stdc++.h"
using namespace std;
unordered_map<string, int> mp;


int countWords(vector<string> v){

    for(auto &val : v) mp[val]++;

    int count = 0;
    for(auto &i:mp){
        if(i.second == 2) count++;
    }
    return count;
}

int main(){

    int T; cin>>T;
    while (T--)
    {
        int N; cin>>N;
        
        vector<string> v;
        for(int i = 0; i<N; i++){
            string s; cin>>s;
            v.push_back(s);
        }
        cout<< countWords(v);
    }
}