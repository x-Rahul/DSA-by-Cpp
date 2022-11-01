/*
error
SquareRoot of a number using binary search.

*/



#include <bits/stdc++.h>
using namespace std;

// Set Precission 
const double eps = 1e-6;

int sqRoot(double num, double s, double e){


    if(e-s<eps) return-1;

    double mid = s + (e-s)/2;
    if(mid * mid == num) return mid;
    if(mid * mid< num) return sqRoot(num, mid+1, e);
    return sqRoot(num,s,mid-1);

}

int main(){
    double num = 4;
    double s = 1, e = num;

    cout<<sqRoot(num, s, e);

}