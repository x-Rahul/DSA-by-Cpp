#include "bits/stdc++.h"
using namespace std;

int main(){
    vector<int> v = {2,3,5};
    vector<int> v1 = {2,-1,5};

    // using labda function as comparator
    // all_of(..)
    cout<<all_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; // uses comparator and checks all elements
    cout<<all_of(v1.begin(), v1.end(), [](int x){return x>0;})<<endl;
    cout<<endl;

    //any_of(..)
    cout<<any_of(v.begin(), v.end(), [](int x){return x%2==0;}) << endl;
    cout<<any_of(v1.begin(), v1.end(), [](int x){return x<0;})<<endl;
    cout<<endl;
    
    //none_of(..)
    cout<<none_of(v.begin(), v.end(), [](int x){return x<0;}) << endl;
    cout<<none_of(v1.begin(), v1.end(), [](int x){return x<0;})<<endl;
    
}