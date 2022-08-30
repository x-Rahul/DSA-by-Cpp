// nth fibonacci number
// fibonacci number : 0 1 1 2 3 5 8 13 21 34 55
// f(n) = f(n-1)+ f(n-2)

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){

    int n = 4;
    cout<<fibonacci(n)<<endl;
    return 0;
}