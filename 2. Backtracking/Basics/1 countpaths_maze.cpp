// Maze Paths

#include <bits/stdc++.h>
using namespace std;

int mazePaths (int n, int r, int c){
    if(r == n || c ==n) return 1;
    return mazePaths (n, r, c+1) + mazePaths(n, r+1, c);
}

int main(){
    cout<<mazePaths(3, 1, 1);
    return 0;
}