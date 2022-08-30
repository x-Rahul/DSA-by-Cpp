#include<bits\stdc++.h>
using namespace std;

int main()
{   
    int n, i;
    cin>>n>>i;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int mx = arr[0];

    for (int j = 0; j < i; j++)
    {
        mx = max(mx, arr[j]);
    }
    cout<<mx<<" ";
    

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i];
    // }
    
    
    return 0;
}