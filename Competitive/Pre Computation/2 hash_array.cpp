// storing the count of element in hash array / vector


#include "bits/stdc++.h"
using namespace std;

const int N = 1e7+10;
vector<int> vhash(N);

int main(){

    int n; cin>>n;
    vector<int> v(n);
    for(auto &i: v) {
        cin>>i;
        vhash[i]++; // increase the count of ith number
    }

    // Ansering Queries
    int Q; cin>>Q;
    while (Q--) 
    {   
        int q; cin>>q;
        cout<<vhash[q]<<" "; // vhash stored the count of all elements at element's idx
    }

    
}