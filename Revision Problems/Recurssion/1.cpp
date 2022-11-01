/*
Check if an array is sorted or not
*/
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    if(n ==1 ) return true;
    return arr[0]<arr[1] and isSorted(arr+1, n-1);
}

int main(){
    int arr[] = {1,2,5,3,9};
    
    cout<< isSorted(arr, 5);
}