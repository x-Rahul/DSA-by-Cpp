// nth fibonacci number
// fibonacci number : 0 1 1 2 3 5 8 13 21 34 55
// f(n) = f(n-1)+ f(n-2)

#include "bits/stdc++.h"
using namespace std;

int fibbo (int n){

    if(n == 0 or n == 1) return n;
    return fibbo(n-1)+fibbo(n-2);
}

int main(){
    cout<< fibbo(3);
}