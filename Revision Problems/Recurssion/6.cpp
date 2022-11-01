// Tower of Hanoi:

#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi (int n, char A, char C, char X){
    if (n == 0) return;
   
    tower_of_hanoi (n-1, A, X, C);
    cout<< A << "->" << C << endl;
    tower_of_hanoi (n-1, X, C, A);
}

int main(){
    tower_of_hanoi (3, 'A', 'C', 'B');
    return 0;
}