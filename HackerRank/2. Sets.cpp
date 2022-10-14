/*
8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6

where 8 = number of Testcases
first column  = queries
second coumn = x (integer)

  q = 1 : Add an element x to the set.
  q = 2 : Delete an element x from the set. (If the number  is not present in the set, then do nothing).
  q = 3 : If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).


for q = 3 print:
                "Yes", if x present in the set.
                "No", otherwise

Output:
Yes
No
No
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
    set<int> s;
    int Q; cin>> Q;
    while (Q--) {
        int q, x; cin>>q>>x;
        if(q==1) s.insert(x);
        else if(q == 2){
            auto it = s.find(x);
            if(it != s.end()) s.erase(it);
        }
        else{
            auto it = s.find(x);
            if(it != s.end()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}