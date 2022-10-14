/*

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1 
1 3 

2 2 -> array sixe = 2, queries = 2
3 1 5 4
5 1 2 8 9 3
0 1 -> query 1
1 3 -> query 2


Sample Output

5
9

*/

#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    int *a[n];
    
    for (int i = 0; i<n; i++){
        
        int k; cin>>k;
        a[i] = new int[k];
    
        for (int j = 0; j<k; j++) cin>>a[i][j];
    }
    
    for (int i = 0; i<q; i++) {
        int x,y; cin>>x>>y;
        cout<<a[x][y] << endl;
    }
    
    return 0;
}