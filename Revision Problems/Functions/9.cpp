/*

Sub array of sum == keySum

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,7,5};
    
    int keySum = 12;

    for(int i = 0; i<v.size(); i++){
        int subSum = 0;
        for(int j = i; j<v.size(); j++) {
            subSum += v[j];
            if(subSum == keySum) {
                
                cout<< i+1 << " " << j+1 <<endl; // 1based indexing
                
                // for printing sub array or arrays
                // for(int k = i; k <= j; k++) {
                //     cout<<v[k]<<" ";
                // }
                cout<<endl;
            }
        }
        cout<<endl;
    }

}