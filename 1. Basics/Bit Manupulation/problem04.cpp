// Finding the unique number


#include<bits/stdc++.h>
using namespace std;

int unique (int arr[], int n)
{   
    // xorsum gives xorsum of unique numbers
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
        cout<< xorsum<<" ";
    }
    cout<<endl;
    return xorsum;
}

int main()
{
    int arr[] = {2,4,6,7,4,5,6,2};
    cout<< unique(arr, 8)<<endl; 
    return 0;
}