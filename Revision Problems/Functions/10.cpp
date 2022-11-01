/*

Smallest Positive number missing in the array.

*/
#include "bits/stdc++.h"
using namespace std;


int main(){
    vector<int> v = {0,-9,1,3,-4,5};
    vector<bool> chk(v.size(), 0);

    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 0) chk[v[i]] = 1;
    }

    for(int i = 0; i<chk.size(); i++) {
        if(chk[i] == 0){
            cout << i;
            return 0;
        }
    }
}