/*
inclompltee
*/

#include <bits/stdc++.h>
using namespace std;

string uniQ(string s){
    auto it = unique(s.begin(), s.end());
    s.resize(distance(s.begin(), it));
    return s;
}

int maxPaint(string wall, int k){
    unordered_map<char, int> uniq;
    for(int i = 0;i<wall.length(); i++) uniq[wall[i]]++;

    int maxcount = 0;
    char max_count_ele;
    for(auto &key:uniq) maxcount = max(maxcount, key.second);
    for(auto &key :uniq) if(key.second == maxcount) max_count_ele = key.first;

    int p=0;
    for(int i = 0; i<wall.length(); i++){
        if(k != 0){
            if(wall[i] != max_count_ele) {
                wall[i] = max_count_ele;
                k--;
            }
        }
    }

    return 0;
}

int main(){
    string s; cin>>s;
    int k; cin>>k;
    int n = s.length();

    string s2 = uniQ(s);

    maxPaint(s,k);

    
}