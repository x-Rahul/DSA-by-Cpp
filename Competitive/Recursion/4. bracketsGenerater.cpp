
/*

input : 3
output : ((())) (()()) (())() ()(()) ()()()

*/

#include <bits/stdc++.h>
using namespace std;

vector<string> bkts;

void generateBkts(string s, int open, int close){
    if(open == 0 and close == 0 ) {
        bkts.push_back(s); return;
    }

    // call for opening bracket
    if(open > 0){
        s.push_back('(');
        generateBkts(s, open -1, close);
        s.pop_back();
    }

    // call for closing bracket
    if(close > 0){
        if(open < close) {
            s.push_back(')');
            generateBkts(s, open, close-1);
            s.pop_back();
        }
    }
}

int main(){
    int n = 3;
    string s = " ";
    
    generateBkts(s, 3, 3);

    for(auto i:bkts) cout<<i;
}