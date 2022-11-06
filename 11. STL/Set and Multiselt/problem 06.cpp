/*
Student name and marks are given
arrange the list in such a manner that the list is sorted in decreasing order of marks.
And if two students have the same marks,they should be arranged in lexicographical manner

Input :
3
Eve 78
Bob 99
Alice 78

Output:
Bob 99
Alice 78
Eve 78

*/
#include "bits/stdc++.h"
using namespace std;

int main(){

    int N; cin>>N;
    multiset<pair<int, string>> db; // compare the 2nd value of pair if key is same
    // multimap<int, string> db; //first come first serve if key is same
    while(N--){
        string name; cin>>name;
        int mark; cin>>mark; mark = mark*-1;
        db.insert({mark, name});
    }
    for(auto pr : db){
        cout<< pr.second <<" "<< (pr.first)*-1 <<endl;
    }
}