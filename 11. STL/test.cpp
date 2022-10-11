#include "bits/stdc++.h"
using namespace std;

void printVec(vector<pair<int,int>> v){
    for (auto i: v) cout<< i.first<<" " << i.second << endl;
}
int main(){
        int n; cin>>n;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; ++i)
        {
            int x, y; cin>>x>>y;
            v.push_back({x,y});
        }
        printVec(v);
    return 0;
}