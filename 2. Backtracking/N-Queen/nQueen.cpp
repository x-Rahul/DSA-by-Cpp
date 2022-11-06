
#include "bits/stdc++.h"
using namespace std;

void print(vector<vector<int>> v){
    for(auto x:v){
        for(auto y: x) cout<<y<<" "; cout<<endl;
    }
}
bool isSafe(vector<vector<int>> &chess, int n, int x, int y){

    // for column check
    for(int r = 0; r < x; r++){
        if(chess[r][y] == 1) return false;
    }
    int r = x, c=y;

    // right diagonal chk
    while (r>=0 and c>=0)
    {
        if(chess[r][c] == 1) return false;
        r--; c--;
    }
    // left diagonal chk
    r = x, c = y;
    while (r>=0 and c<n)
    {
        if(chess[r][c] == 1) return false;
        r--; c++;
    }
    return true;
}

// bool nQueen(vector<vector<int>> &chess, int n, int Q, int x, int y){


//     if(Q == 0) {
//         return true;
//     }

//    if(isSafe(chess, n, x, y)){
//         chess[x][y] == 1;
//         return nQueen(chess, n, Q-1, x+1,0);
//    }
//    if( y == n-1) y=0, x++;
//    return nQueen(chess,n,Q, x,y+1);
// }

bool nQueen(vector<vector<int>> &chess,int n int x, int n){

    if (x>=n){
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if(isSafe(chess, x, col, n)){
            chess[x][col] =1;
            
            if(nQueen(chess, x+1, n)){
                return true;
            }
            chess[x][col] = 0; //backtracking
        }
    }
    return false;
}


int main(){
    int n; cin>>n;
    vector<vector<int>> chess(n, vector<int> (n));

    // nQueen(chess,n, n, 0, 0);
    nQueen(chess, n, 0, 0);
    print(chess);

}