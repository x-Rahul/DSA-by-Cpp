#include<bits/stdc++.h>
using namespace std;


int first(int arr[], int n, int key, int pos){

    if (pos == n){
        return -1;
    }
    if (arr[pos] == key){
        return pos;
    }
    int ans = first(arr, n, key, pos+1);

    return ans;
}

int last(int arr[], int n, int key, int pos){

    if (pos == n){
        return -1;
    }
    
    
    if ( last(arr, n, key, pos+1) != -1 ){
        return last(arr, n, key, pos+1);
    }
    if (arr[pos]==key){
        return pos;
    }
    return -1;
}

int main(){

    int n; cin>>n;
    int arr[n];
    int key; cin>> key;


    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<first(arr, n, key, 0)<<endl;
    cout<<last(arr, n, key, 0)<<endl;
    return 0;
}