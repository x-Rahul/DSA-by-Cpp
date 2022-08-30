// Tower of Hanoi:

#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi (int n, string Source, string Destination, string Helper){
    if (n == 0){
        return;
    }
    tower_of_hanoi (n-1, Source, Helper, Destination);
    cout<< "Move From " << Source << " to " << Destination << endl;;
    tower_of_hanoi (n-1, Helper, Destination, Source);
    
}

int main(){
    tower_of_hanoi (3, "A", "B", "X");
    return 0;
}