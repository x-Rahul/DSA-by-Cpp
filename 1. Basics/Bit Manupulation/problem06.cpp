// Find a unique number in an array where all numbers present thrice, except that one number

#include<bits/stdc++.h>
using namespace std;

int unique (int arr[], int n)
{   
    // xorsum gives xorsum of unique numbers
    int xorsum = 0;
    int result = 0;
    
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ( (arr[j] & (1<<i))  ){
                sum++;
            }
        }
        if( sum%3 != 0 ){
            result = (result | (1<<i));
        }
    }
    return result;
}

int main()
{
    int arr[] = {1,2,3,2,1,3,2,1,4,3};
    cout<< unique(arr, 10)<<endl; 
    return 0;
}