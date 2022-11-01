#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n][n];
    int key = 10;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin>>arr[i][j];
    }
    
    int r = 1, c = n;
    bool flag = false;
    while (r <=n and c >= 0)
    {
        if(key == arr[r][c]) flag = true;
        if(key < arr[r][c]) c--;
        else  r++;
    }
    cout<<flag;
    


}