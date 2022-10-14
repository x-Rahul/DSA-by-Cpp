#include "bits/stdc++.h"
using namespace std;
/*

Lower and Upper boud returns a location - pointer in case of arrays and returns a iterator
in case of vectors.

Lower Bound return the location of number if present or location of next greater number if that number not present.
Upper bound returns the location of next gratest number.

*/


int main(){
    int n; cin>>n;
    vector<int> v(n);
    for (auto &i:v) cin>>i;

    // First sort the vector
    sort(v.begin(), v.end());


    auto low = lower_bound(v.begin(), v.end(), 5);
    auto up = upper_bound(v.begin(), v.end(), 5);

    if(low == v.end()) cout<<"Not Found";
    else cout<<"Lower Bound : "<< *low << endl;

    if(up == v.end()) cout<<"Not Found";
    else cout<<"Upper Bound : "<< *up << endl;
    
    return 0;
}