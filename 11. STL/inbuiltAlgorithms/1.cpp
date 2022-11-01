#include "bits/stdc++.h"
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;

    int min = *min_element(v.begin()+3, v.end());
    int max = *max_element(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0); // here 0 is the initial sum
    cout<<"Min : " << min<<endl;
    cout<<"Sum : "<< sum <<endl;


    int ct = count(v.begin(), v.end(), 6);
    cout<<"Count of" << 6 <<" : "<<ct<<endl;

    auto eleit = find(v.begin(), v.end(), 4);
    if(eleit != v.end()) cout<<"Elemeny found at " << eleit-v.begin()<<endl;
    else cout<<" element not found"<<endl;

    reverse(v.begin()+2, v.end());
    for(auto i:v) cout<<i<<" ";
    cout<< endl;
}