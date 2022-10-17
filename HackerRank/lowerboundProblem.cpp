# include "bits/stdc++.h"
using namespace std;


int main() {  
    int N; cin>>N;
    
    vector<int> v(N);
    for(auto &i : v) cin>>i;
    
    int Q; cin>>Q;
    while (Q--)  {
        int q; cin>>q;

        auto low = lower_bound(v.begin(), v.end(), q);
        if(*low == q) cout<< "Yes" << " "<< low-v.begin()+1 <<endl;
        else cout<<"No"<<" "<< low-v.begin()+1 <<endl;

    }
    return 0;
}
