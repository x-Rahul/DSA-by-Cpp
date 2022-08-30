# include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    int num;
    cin>>num;

    bool value = 0;
    for (int i = 2; i < sqrt(num); i++){
        if(num%i == 0){
            cout<<"not prime"<<endl;
            value = 1;
            break;
        }
    }
    if(value == 0){
        cout<<"prime"<<endl;
    }  
}