//Write a program to count the number of ones in representation of a number

#include <bits/stdc++.h>
using namespace std;


int ones(int n)
{
    int count = 0;
    while (n)
    {   
        n = n & (n-1);
        count++;
    }
    return count;  
}

int main()
{   
    cout<< ones(19) << endl;
    return 0;
}