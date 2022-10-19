#include "bits/stdc++.h"
using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
vector<int> PreFact(N);

int main(){

         // Precomputing factorial
        PreFact[0] = 1;
        PreFact[1] = 1;

        for(int i = 2; i<N; i++){
            PreFact[i] = PreFact[i-1]*i;
        }

    int T; cin>>T;  
    while(T--){
        int n;cin>>n;
        cout<<PreFact[n] <<" ";
    }
}

/*
contstrains :

1<= T <= 10^5
1<= N <= 10^5

*/

// Time Complexity - O(T*N) = 10^10;

// Precompute factorial of all numbers in the range