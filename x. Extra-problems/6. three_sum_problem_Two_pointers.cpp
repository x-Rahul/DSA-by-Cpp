#include "bits/stdc++.h"
using namespace std;

bool isSumTriplet(vector<int> a, int n, int target){


    // 1. sorting the vector
    sort(a.begin(), a.end());

    //2. Iteration
    for(int i = 0; i<n; i++){
        int lo = i+1, hi = n-1; //two sum problem
        while (lo<hi)
        {
            int curSum = a[i] + a[lo] + a[hi];
            if(curSum == target)
                return true;

            if(curSum < target)
                lo++;
            else
                hi--;       
        }
    }
    return false;
}


int32_t main(){

    int n; cin >>n;
    int target; cin>>target;

    vector<int> a(n);
    for(auto &i:a)
        cin>>i;
    
    cout<<isSumTriplet(a, n, target);

    return 0;
}