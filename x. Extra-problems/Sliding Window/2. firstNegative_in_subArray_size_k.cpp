/*

First -ve Integer in every window of size k

*/


#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto &i:v) cin>>i;

    int s = 0, e = 0;
    int maxS = INT_MIN, sum = 0;
    vector <int> ans;
    deque<int> Q;

    while (e<n)
    {   
        if(v[e]<0) Q.push_back(v[e]);
  
        if(e-s+1 < k) e++;
        else{
            if(Q.empty()) ans.push_back(0);
            else{
                ans.push_back(Q.front());
                if(v[s]<0) Q.pop_front(); 
            }
            s++,e++;
        }
    }
    for (auto i : ans) cout<<i << " ";
    return 0;
 
}
