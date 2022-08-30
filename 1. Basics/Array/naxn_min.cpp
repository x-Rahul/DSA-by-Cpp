#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maxn = arr[0], minn = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxn = max(maxn, arr[i]);
        minn = min(minn, arr[i]);
    }
    cout<<maxn<<endl<<minn<<endl;

    return 0;
}