#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v  = {10,11,12,13,14};

    for(auto i:v) cout<< i << " ";
    cout<<endl;

    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout<< *it << " ";
    }
    cout<<"\n";
    // In Case of pair (*it).first is same as it->first


    // iterators in short
    vector<pair<int, int>> vp  = { {1,2},{3,4}, {5,6} };

    for(pair<int,int> &i : vp) cout<<i.first<<" "<< i.second<<endl;
    for(auto &i : vp) cout<<i.first<<" "<< i.second<<endl;

}