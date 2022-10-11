#include "bits/stdc++.h"
using namespace std;
int main()
{
    set<int> s;

    s.insert(1); // O(log(n))
    s.insert(2);
    s.insert(2);
    s.insert(8);
    s.insert(7);

    auto it = s.find(8); // iterator
    if(it != s.end()) cout<< *it <<endl;

    // Printing the element in the set
    for(auto i : s) cout <<i;
    cout<<endl;
    // or
    for(auto i = s.begin(); i != s.end(); i++) cout <<*i ;
    cout<<endl;

    // Printing in reverse Order
    for(auto i = s.rbegin(); i != s.rend(); i++) cout <<*i;
    cout<<endl;

    //size of the Set
    cout<<s.size()<<endl;
    return 0;
}