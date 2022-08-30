#include <bits/stdc++.h>
using namespace std;


void prime_nos(int a, int b)
{
    int i;
    for (int num = a+1; num<b; num++){

        // To check if Number is prime or not
        for (i = 2; i<num; i++){
            if(num % i == 0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
}


int main(){
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  
    int a, b;
    cin>>a>>b;
    prime_nos(a, b);
   
    return 0;
}
