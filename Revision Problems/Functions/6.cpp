/*

Sum of all sub arrays andd printng all sub arrays

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,0,7,2};
    
    vector<int> subSum;
    for(int i = 0; i<v.size(); i++){
        int sum = 0;
        for(int j = i ; j<v.size(); j++){
            sum += v[j];
            subSum.push_back(sum); // Sub Array sum

            // Printing all sub arrays
            for(int k = i; k<j; k++) cout<< v[k] << " ";
            cout<<endl;
        }
        cout<<endl;
    }
    for(auto i: subSum) cout<<i<<" ";

}