// Find Greatest common difference between two numbers

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    
    while ((a-b )!= 0)
    {   
        int rem = a%b;
        a = b;
        b = rem;
        
        // // other way
        // int diff = abs(a - b);
        // a = b;
        // b = diff;
    }
    
    return a;
}

int main(){

    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}