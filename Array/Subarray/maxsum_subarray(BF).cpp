
// Brute Force technique

#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {   int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            max_sum = max(max_sum, sum);
        }
    }
    cout<<max_sum;
    return 0;
}