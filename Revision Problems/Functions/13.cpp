/*
transpose of a matrix
*/

#include "bits/stdc++.h"
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n][n];
    
    for(int i = 1; i<=n; i++ ){
        for(int j = 1; j<=n; j++) cin>>arr[i][j];
    }
    for(int i=1; i<=n; i++){
        for(int j = i; j <=n; j++) swap(arr[i][j], arr[j][i]);
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j = 1; j <=n; j++) cout<<arr[i][j]<< " ";
        cout<<endl;
    }

}