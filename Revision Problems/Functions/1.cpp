/*

Print all Prime numbers between a and b

*/

#include "bits/stdc++.h"
using namespace std;


bool isPrime(int n){
    for(int i = 2; i< sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){

    int a,b;
    a = 5;
    b  = 33;

    for(int i = a; i<b; i++){
        if(isPrime(i)) cout<< i << " ";
    }

}