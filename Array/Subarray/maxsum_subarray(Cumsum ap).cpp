
// Brute Force technique

#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int cum_sum[n+1];
    cum_sum[0] = 0;
    for(int i = 1; i<=n; i++){
        cum_sum[i] = cum_sum[i-1] + a[i-1];
    }
    
    int max_sum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 0; j<i; j++){
            sum = cum_sum[i] - cum_sum[j];
            max_sum = max(max_sum, sum); 
        } 
    }
    cout<<max_sum<<endl;
    return 0;
}