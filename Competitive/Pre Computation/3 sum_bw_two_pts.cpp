/*

1 <= N <= 10^5
1 <= Ai <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N

*/


// storing the sum of nth element in hash array / vector


#include "bits/stdc++.h"
using namespace std;

const int N = 1e7+10;
vector<int> vhash(N);

int main(){

    int n; cin>>n;
    vector<int> v(n);
    long long sum = 0;
    for(auto &i: v) {
        cin>>i;
        sum += i; // pre computing
        vhash[i] += sum; // storing at ith idx
    }

    // Ansering Queries
    int Q; cin>>Q;
    while (Q--) 
    {   
        int start, end; cin>>start>>end;
        
        long long reqSum =  vhash[v[end]] - vhash[v[start]];

        cout<<reqSum<<" "<<endl;
    }

    
}