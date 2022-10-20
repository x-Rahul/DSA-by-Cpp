#include "bits/stdc++.h"
using namespace std;

void safePlace(vector<int> v, int k, int idx){

    if(v.size() == 1) {
        cout<<"safe place : "<< v[0];
        return;
    }

    idx = ((idx + k) % v.size());
    cout<<idx <<" ";
    auto tokill = v.begin()+idx; 
    v.erase(tokill);
    cout<<endl;
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
    safePlace(v, k, idx);
}

int main(){
    int n, k; cin >> n>>k;
    k--; 
    int idx = 0;

    vector <int> v;
    for(int i = 1; i<=n; i++) v.push_back(i);
    
    safePlace(v, k, idx);
}