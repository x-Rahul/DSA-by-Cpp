/*
Monk enters class having numberof students with candies. some more students will enter
the class with some candies. Print yes if any student found who has same no. of candies
as the entering student Print "Yes" else "NO". 


1
2 3
3 2 
9 11 2

output :
no 
no
yes
*/

#include "bits/stdc++.h"
using namespace std;

int main(){
    long long T; cin>> T;
    while (T--)
    {
        long long n, m; cin>> n>>m;
        multiset<long long> A;
        while(n--){
            long long x; cin>>x;
            A.insert(x);
        }

        while(m--){
            long long x; cin>> x;
            auto found = A.find(x);
            if(found != A.end()) cout<<"YES" << endl;
            else {
                cout<<"NO"<<endl;
                A.insert(x);
            }
        }
    }
}