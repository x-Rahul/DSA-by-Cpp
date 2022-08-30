// Calculate n^p using recursion.

#include<bits/stdc++.h>
using namespace std;

int power(int n, int k){
    if (k==0){
        return 1;
    }
    return n * power(n, k-1);
}


int main()
{   
    int n,k;
    cin>>n>>k;
    cout << power(n, k);
    return 0; 
}