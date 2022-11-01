/*
GCD - euclid
*/

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 42, b = 24;
    cout<< gcd(a,b);
}