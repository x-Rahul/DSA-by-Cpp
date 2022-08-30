// Count path 

#include <bits/stdc++.h>
using namespace std;

int countPath_2D (int n, int i, int j){

    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>n-1 || j>n-1){
        return 0;
    }

    return countPath_2D (n, i+1, j) + countPath_2D (n, i, j+1);
}

int main(){
    cout<<countPath_2D(3, 0, 0);
    return 0;
}