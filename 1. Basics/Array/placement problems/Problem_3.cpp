/*
Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.
Constraints
1 <= N <= 106
0 <= Ai <= 106
Example
Input:
7
1 5 3 4 3 5 6
Output:
2
*/

#include<bits\stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    const int N = 100000;
    int I[N];
    for (int i = 0; i < N; i++)
    {
        I[i] = -1;
    }
    
    int min_i = INT_MAX;
    for(int i = 0; i< n; i++){
        if (I[A[i]] != -1)
        {
            min_i = min(min_i, I[A[i]]);  
        }
        else{
            I[A[i]] = i;
        }
    }

    if(min_i == INT_MAX){
        cout<<"nill"<<endl;
    }
    else{
        cout<<min_i + 1<<endl;
    }

    return 0;
}