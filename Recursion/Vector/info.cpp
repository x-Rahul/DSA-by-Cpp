#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v1 (5,6);
    v1.push_back(2);v1.push_back(5);v1.push_back(3);
    for(auto ele : v1)
    cout<<ele;
    cout<<endl;

    vector <int> v2 (2 , 0);
    for(auto ele : v2)
    cout<<ele;
    cout<<endl;        

    swap(v1, v2);

    for(auto ele : v2)
    cout<<ele;
    cout<<endl;

    sort(v2.begin(), v2.end());
    
    for(auto ele : v2)
    cout<<ele;
    cout<<endl;


    pair<int, int> p;
    p.first = 1;
    p.second = 2;

    return 0;
}





