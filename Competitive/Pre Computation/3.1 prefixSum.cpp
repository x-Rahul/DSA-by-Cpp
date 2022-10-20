/*

6
3 6 2 8 9 7
4
2 3
4 5
1 5
3 5

output :
8 
17 
28 
19

*/



#include "bits/stdc++.h"
using namespace std;

const int N = 1e7+10;
vector<int> pf(N);

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 1; i<=n; i++){
        cin >> v[i];
        pf[i] = pf[i-1] + v[i];
    }
     // Ansering Queries
    int Q; cin>>Q;
    while (Q--) 
    {   
        int l, r; cin>>l>>r;
        
        int reqSum =  pf[r] - pf[l-1];

        cout<<reqSum<<" "<<endl;
    }
    
}