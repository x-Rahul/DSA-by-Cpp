#include <bits/stdc++.h>
using namespace std;


void fib(int n)
{   // 0 1 1 2 3 5 8 13 21
    int t1 = 0, t2 = 1, next_term;

    for(int i = 1; i<=n; i++){

        cout<<t1;
        next_term = t1+t2;
        t1 = t2;
        t2 = next_term;
    }
}

int main(){
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  
    int n;
    cin>>n;
    fib(n);
   
    return 0;
}
