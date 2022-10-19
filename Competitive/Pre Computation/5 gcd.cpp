#include "bits/stdc++.h"
using namespace std;


const int N = 1e7+10;
int forHashArr[N];
int revHashArr[N];


int main(){
    int T;cin>>T;

    while (T--)
    {
        int N,Q; cin>>N>>Q;
        int arr[N+10];
        for(int i = 1; i<=N; i++) {
            cin>>arr[i];
        }
        
        forHashArr[0] =revHashArr[N+1] = 0;
        int gc = 0;
        for(int i = 1; i <= N; ++i) {
            forHashArr[i] = __gcd(forHashArr[i-1], arr[i]);
            
        }
        for(int i = N; i >=1; i--) {
            revHashArr[i] = __gcd(revHashArr[i+1], arr[i]);
        }

        while (Q--)
        {
            int l, r; cin>>l>>r;
            int gcd = __gcd(forHashArr[l-1], revHashArr[r+1]);
            cout<<gcd<< " ";
        }
        cout<<endl;
    }
    
}