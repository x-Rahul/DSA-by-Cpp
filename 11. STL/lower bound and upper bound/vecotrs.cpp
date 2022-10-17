#include "bits/stdc++.h"
using namespace std;
/*

Lower and Upper boud returns a location - pointer in case of arrays and returns a iterator
in case of vectors.

Iterator lower_bound (Iterator first, Iterator last, const val) 
Iterator upper_bound (Iterator first, Iterator last, const val) 
lower_bound returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘val’. 

and if the value is not present in the vector then it returns the end iterator.
upper_bound returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘val’. 



*/


int main(){
    int n; cin>>n;
    vector<int> v(n);
    for (auto &i:v) cin>>i;

    // First sort the vector
    sort(v.begin(), v.end());
    for (auto &i:v) cout<<i<<" "; cout<<endl;


    auto low = lower_bound(v.begin(), v.end(), 1);
    auto up = upper_bound(v.begin(), v.end(), 1);

    if(low != v.end()) cout<<"Lower Bound : "<< *low << endl;
    if(up != v.end()) cout<<"Upper Bound : "<< *up << endl;


    auto it = find(v.begin(), v.end(), *low);

    if(it != v.end()){
        int i = it- v.begin();
        cout<<"upper it at : "<<i<<endl;
    }
    return 0;
}