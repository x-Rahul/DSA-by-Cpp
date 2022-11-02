#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v  = {10,11,12,13,14};

    // vector<int>::iterator it;
    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *it << " ";
    }
    cout<<"\n";
    // In Case of pair (*it).first is same as it->first


    // iterators in short
    vector<pair<int, int>> vp  = { {1,2},{3,4}, {5,6} };

    for(auto itr = vp.begin(); itr != vp.end(); itr ++){
        cout<< itr->first << " " << itr->second << endl;
    }
    
    // for(auto &i : vp) cout<<i.first<<" "<< i.second<<endl;

}