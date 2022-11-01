#include "bits/stdc++.h"
using namespace std;

int main(){
    vector<int> v = { 10, 5, 3, 4, 3, 5, 6 };
    set<int> st;
    int ans = -1;
    for(int i = v.size()-1; i>=0; i--){
        if(st.find(v[i]) != st.end()) ans = i;
        else st.insert(i);
    }
    cout<<ans;
}