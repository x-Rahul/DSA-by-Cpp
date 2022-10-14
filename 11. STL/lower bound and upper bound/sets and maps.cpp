#include "bits/stdc++.h"
using namespace std;

int main(){
    set<int> s;

    int n; cin>>n;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        s.insert(x);
    }


    // Lower Bound
    auto l = s.lower_bound(5);
    auto u = s.upper_bound(5);

    cout<<"Lower Bound : "<< *l << endl;
    cout<<"upper Bound : "<< *u << endl;

    return 0;
}