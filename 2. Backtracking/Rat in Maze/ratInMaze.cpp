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
1 0 0 0 0
1 1 1 1 0
0 0 0 1 0
0 0 0 1 1
0 0 0 0 1

*/

#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> ans(5, vector<int>(5));
void print(vector<vector<int>> v){
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[i].size(); j++) cout<<v[i][j] <<" ";
        cout<<endl;
    }
}

bool ratMaze(vector<vector<int>> &maze, int x, int y){

    int n = maze.size();
    if(x == n-1 and y==n-1) {
        ans[x][y] = 1;
        return true;
    }

    if(x<n and y<n and maze[x][y] == 1) // isSafe
    {
        ans[x][y] = 1;
        if(ratMaze(maze, x+1, y) or ratMaze(maze, x, y+1)) return true;

        ans[x][y] = 0; // backtrack
        return false;
    }
    return false;
}

int main(){
    int n; cin>>n;
    vector<vector<int>> maze;
    // Input 2D vector
    for(int i = 0; i <n; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            int x; cin>>x;
            temp.push_back(x);
        }
        maze.push_back(temp);
    }
    
    ratMaze(maze, 0, 0);
    print(ans);  
}