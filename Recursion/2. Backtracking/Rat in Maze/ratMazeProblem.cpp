// Rat in a 2D Maze.

/*
    input :
    5
    1 0 1 0 1
    1 1 1 1 1
    0 1 0 1 0
    1 0 0 1 1
    1 1 1 0 1

    Output :
    1, 0, 0, 0, 0
    1, 1, 1, 1, 0
    0, 0, 0, 1, 0
    0, 0, 0, 1, 1
    0, 0, 0, 0, 1

*/


#include<bits/stdc++.h>
using namespace std;

bool isTrue(int **MazeArr, int x, int y, int n){
    if (x<n && y<n && MazeArr[x][y] == 1){
        return true;
    }
    return false;
}

bool ratinMaze(int** MazeArr, int x, int y, int n, int** SolArray){
    
    if(x==n-1 && y==n-1){
        SolArray[x][y] = 1;
        return true;
    }

    if(isTrue(MazeArr, x, y, n)){
        SolArray[x][y] = 1;
        
        if(ratinMaze(MazeArr, x+1, y, n, SolArray) || ratinMaze(MazeArr, x, y+1, n, SolArray)){
            return true;
        }

        SolArray[x][y] = 0;     // backtracking
        return false;
    }
    return false;
}

int main(){

    int n; cin>>n;

    // Dynamic memory allocation :
        // Maze Matrix
        int** MazeArr = new int*[n];
        for (int i = 0; i < n; i++){
            MazeArr[i] = new int[n];
        }

        for(int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>MazeArr[i][j];
            }
        }
        // Solution Matrix
        int** SolArr = new int*[n];
        for (int i = 0; i < n; i++){
            SolArr[i] = new int[n];

            //initialize with 0 Matrix
            for(int j=0; j<n; j++){
                SolArr[i][j] = 0;
            }
        }
    cout<<endl;
    if(ratinMaze(MazeArr, 0, 0, n, SolArr)){
        for (int i = 0; i < n; i++){
            for(int j=0; j<n; j++){
                cout<< SolArr[i][j] << " ";
            }
            cout<<endl;
        }
    }

    return 0;
}