// Write a programe to check if a given number is power of 2


#include<bits/stdc++.h>
using namespace std;

bool isPower_of_2(int n)
{
    return (n && !(n & (n-1)));
}   

int main()
{   
    cout<< isPower_of_2(0) << endl;
    return 0;
}