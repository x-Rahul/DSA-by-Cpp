/*

6
5 6 2 4 9 4

4
2 
4 
1 
3

Output :
11
30
5
13

*/

#include "bits/stdc++.h"
using namespace std;

const int N = 1e7+10;
vector<int> hashSum(N);

int main(){
    int n; cin>>n;
    vector<int> v(n);
    int sum  = 0;
    for(int i = 1; i<=n; i++){
        cin>>v[i];
        sum += v[i];
        hashSum[v[i]] = sum;
    }
    int Q; cin>>Q;
    while (Q--)
    {
        int q; cin>>q;
        
        cout<< hashSum[v[q]] << endl;
    }
    
}