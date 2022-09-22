/*
Given an array of 0s and 1s, we may change up to K values from 0 to 1.
Returns the length of the longest(contiguous) subarray that contains only 1s

input: A = 1 1 1 0 0 0 1 1 1 1 0, k = 2
Output: 6
 */

#include "bits/stdc++.h"
using namespace std;

int ANS(vector<int> a, int n, int k){

    /* 
    Window a[i...j]

    a[i+1 ..... j] : Window size Decrese
    a[i.....j+1] : window Size increase
    */

    int ans = 0, i = 0, zeroCount = 0;

    // step 1 : Find the longest subArray with most k number of 0s
    for (int j = 0; j < n; j++)
    {   
        if(a[j] == 0)
            zeroCount++;
        while(zeroCount > k){
            if(a[i]==0)
                zeroCount--;
            i++;
        }
        // zeroCount <= k
        ans = max(ans, j-i+1);
    }
    
    return ans;
}

int main(){

    int n; cin>>n;
    int k; cin>>k;
    vector<int> a(n);
    for(auto &i: a)
        cin>>i;

    
    cout<<ANS(a, n, k);

    return 0;
}
