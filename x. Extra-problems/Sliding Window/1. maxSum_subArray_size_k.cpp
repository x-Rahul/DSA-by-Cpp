#include "bits/stdc++.h"
using namespace std;


int main(){

    int n, k;cin>>n>>k;
    vector<int> v(n);
    for(auto &i:v) cin>>i;

    int s = 0, e = 0;
    int sum = 0, maxS = INT_MIN; 
    while (e<n)
    {   
        sum += v[e];
        if(e-s+1 < k) e++;
        else{
            maxS = max(maxS, sum);
            sum -= v[s];
            s++;e++;
        }
        
    }
    cout<<maxS; 
    return 0;
}