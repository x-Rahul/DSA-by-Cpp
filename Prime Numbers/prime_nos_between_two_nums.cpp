#include <bits/stdc++.h>
using namespace std;

int main(){
    

    int num, a, b;
    int count;

    cin>>a>>b;

    for (num = a+1; num<b; num++){

        // To check if Number is prime or not
        for (count = 2; count<num; count++){
            if(num % count == 0){
                break;
            }
        }
        if(count==num){
            cout<<num<<endl;
        }

    }
     
    return 0;
}
