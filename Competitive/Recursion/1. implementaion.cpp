#include "bits/stdc++.h"
using namespace std;


int sum(vector<int> v, int n){
    if(n < 0) return 0;
    return sum(v, n-1) + v[n];
}

int digitSum(int n){

    if (n == 0) return 0;
    return digitSum(n/10) + (n%10);
}


int main(){
    
    vector<int> v = {11,15,12,45,19,8};
    cout<< sum(v, 3);
    cout<<endl;

    cout<< digitSum(12345);
}