#include "bits/stdc++.h"
using namespace std;

int main(){

    int n, m; cin>>n>>m;
    int arr[n][m];
    
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<=m; j++) cin>>arr[i][j];
        cout<<endl;
    }

    int sr = 1, er = n, sc = 1, ec = m;
    while (sr <= er and sc <= ec)
    {       
        for(int j = sc; j <= ec ; j++) cout<<arr[sr][j] << " "; // for row start
        sr++;
        for(int i = sr; i<= er; i++) cout<<arr[i][ec]<< " "; // end col
        ec--;
        for(int j = ec; j >= sc; j--) cout<<arr[er][j]<< " "; // end row
        er--;
        for(int i = er; i >= sr; i--) cout<<arr[i][sc]<< " "; // start col
        sc++;
    }
    
}