/*
//Mirror Palindrome
5

        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
5 4 3 2 1 2 3 4 5
  4 3 2 1 2 3 4
    3 2 1 2 3 
      2 1 2
        1

*/

#include "bits/stdc++.h"
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        for(int j = 1; j<= n-i; j++) cout<<"  ";

        int k = i;
        for(int j=1; j<=i; j++) cout<<k--<<" ";

        k = 2;
        for(int j=1; j<i; j++) cout<<k++<<" ";
        cout<<endl;
    }
//-------------mirror
     for(int i=n; i>=1; i--){
        for(int j = 1; j<= n-i; j++) cout<<"  ";

        int k = i;
        for(int j=1; j<=i; j++) cout<<k--<<" ";

        k = 2;
        for(int j=1; j<i; j++) cout<<k++<<" ";
        cout<<endl;
    }
    
}