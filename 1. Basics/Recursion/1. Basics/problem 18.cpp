#include <bits/stdc++.h>
using namespace std;

int fillTile(int n){
    if(n == 0 || n ==1) return n;
    return fillTile(n-1)+fillTile(n-2);
}
int main(){

    cout<<fillTile(4);
    return 0;
}