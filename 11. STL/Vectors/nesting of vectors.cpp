#include "bits/stdc++.h"
using namespace std;

void printVec(vector<pair<int,int>> v){
    for (auto i: v) cout<< i.first<<" " << i.second << endl;
}
int main(){

    vector<pair<int, int>> v = {{1,2}, {4,5}, {6,7}};
    printVec(v);
    cout<<endl;

        // Taking input 
        int n1; cin>>n1;
        vector<pair<int,int>> v1(n1);
        for (auto &i: v1) cin>> i.first >> i.second;
        printVec(v1);

        // int n2; cin>>n2;
        // vector<pair<int,int>> v2(n2);
        // for(auto &i: v2){
        //     int x, y; cin>>x>>y;
        //     v2.push_back({x,y});
        // }
        // printVec(v2);
    return 0;
}