// first common  element

#include "bits/stdc++.h"
using namespace std;


int main(){

    vector<int> v1 = {1,1,2,4,8,12,6, 3};
    vector<int> v2 = {0, 12 ,4, 45, 6,  8};

    // first common element
    auto fcommon  = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end());
    cout<<*fcommon << endl; 
    // second common element
    auto scommon = find_first_of(fcommon+1, v1.end(), v2.begin(), v2.end());
    cout<<*scommon <<endl;
}