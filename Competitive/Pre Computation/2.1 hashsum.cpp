// storing the sum of nth element in hash array / vector


#include "bits/stdc++.h"
using namespace std;

const int N = 1e7+10;
vector<int> vhash(N);

int main(){

    int n; cin>>n;
    vector<int> v(n);
    int sum = 0;
    for(auto &i: v) {
        cin>>i;
        sum += i; // pre computing
        vhash[i] += sum; // storing at ith idx
    }

    // Ansering Queries
    int Q; cin>>Q;
    while (Q--) 
    {   
        int q; cin>>q;
        // cout<<  v[q]<<" ";
        cout<<vhash[v[q]]<<" ";
    }

    
}