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

void print(vector<vector<int>> v){
    for(auto i:v){
        for(auto j:i) cout<< j<<" "; cout<<endl;
    }
}


bool mazePath(vector<vector<int>> &maze,vector<vector<int>> &sol, int x, int y){
    int n = maze.size();
    if(x==n-1 and y == n-1) {
        sol[x][y] = 1; return true;
    }

    if(x<n and y<n and maze[x][y] == 1){
        sol[x][y] = 1;
        if((mazePath(maze, sol, x, y+1)) or (mazePath(maze, sol, x+1, y))) {
            sol[x][y] = 1; return true;
        }
        sol[x][y] = 0;
        return false;
    }
    return false;
}
int main(){
    int n; cin>> n;
    
    vector<vector<int>> maze(n, vector<int>(n));
    vector<vector<int>> sol(n, vector<int>(n));
    
    for(auto &x: maze){
        for(auto &y: x) cin>>y;
    }

    mazePath(maze,sol,0,0);
    print(sol);

}