// N-Queen Problem :
/*
    input :
    4
    1 1 1 1
    1 1 1 1
    1 1 1 1
    1 1 1 1

    Output :
    

*/

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** chessMat, int x, int y, int n){
    
    // checking current row
    for (int row = 0; row < x; row++)
    {
        if(chessMat[row][y] == 1){
            return false;
        }
    }
    
    // // or
    // int row = 0; int col=0;
    // while (row<x)
    // {
    //     if(chessMat[row][y] == 1){
    //         return false;
    //     }
    //     row++;
    // }


    //checking left top diagonal
    int row = x; int col = y;
    while (row>=0 && col>=0)
    {
        if(chessMat[row][col] == 1){
            return false;
        }
        row--;
        col--;
    }
    //checking Right top diagonal
    row = x, col = y;
    while (row>=0 && col < n)
    {
        if(chessMat[row][col] == 1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

// Recursive function :
bool nQueen(int** chessMat, int x, int n){

    if (x>=n){
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if(isSafe(chessMat, x, col, n)){
            chessMat[x][col] =1;
            
            if(nQueen(chessMat, x+1, n)){
                return true;
            }
            chessMat[x][col] = 0; //backtracking
        }
    }
    return false;
}

int main(){
    int n; cin>>n;

    // Dynamic memory allocation :
    int** chessMat = new int*[n];
    for (int i = 0; i < n; i++)
    {
        chessMat[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            chessMat[i][j] = 0;
        }
    }
    
    if(nQueen(chessMat, 0, n)){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<chessMat[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }

}