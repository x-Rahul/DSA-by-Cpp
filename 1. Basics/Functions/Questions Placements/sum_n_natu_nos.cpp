#include <bits/stdc++.h>
using namespace std;

int natsum (int x){

    int sum = 0;
    for(int i = 1; i <= x; i++){
        sum += i;
    }
    return sum;
}


main(){

    int n;
    cin>>n;

    cout<< natsum(n) << endl;

}