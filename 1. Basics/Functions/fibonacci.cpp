#include <bits/stdc++.h>
using namespace std;


int fib(int n)
{   
    int fibo[n];
    
    fibo[0] = 1, fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo [n-1];
  
}

int main(){

     cout<<fib(2);
}
