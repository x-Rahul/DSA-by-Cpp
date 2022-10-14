#include "bits/stdc++.h"
#include "deque"
using namespace std;

int main(){
    
    vector<int> v = {10,11,12,13,14};
    
    int *d = v.data();
    v.push_back(15);
    
    for (auto i: v) cout<<i<< " ";
    cout<<"\n";
    for(vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); i++)
        cout<<*i<<" ";
    cout<<"\n";
    
     
 
    list<int> l = {5,6,7,5,8};
    
    l.push_front(4);
    
    for(auto &i:l) cout<<i << " ";
    cout<<"\n";
    for(list<int> ::reverse_iterator i = l.rbegin(); i != l.rend(); i++)
        cout<<*i<<" ";
    cout<<"\n";
    
    // list<int> ::iterator pos = l.begin();
    
    // for(int q=0; q<50; q++) pos++;
}
