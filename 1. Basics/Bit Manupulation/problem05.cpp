// Finding 2 unique numbers from arraw with all other numbers repeting twice.


#include<bits/stdc++.h>
using namespace std;

void unique (int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    // cout<< xorsum <<endl;

    int tempxor = xorsum;
    int setBit = 0;
    int pos = 0;
    while (setBit!=1)
    {   
        setBit = xorsum & 1;
        xorsum = xorsum >> 1;
        pos++;
    }
    
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {   
        // check setBit
        if (    (arr[i] & (1<<(pos-1)))  )
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout<< "first unique num : " << newxor << endl;
    cout<< "Second unique num : " << (tempxor ^ newxor) << endl;
}

int main()
{
    int arr[] = {1,2,3,1,2,3,5,7};
    unique(arr, 8);
    return 0;
}