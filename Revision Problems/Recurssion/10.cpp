/*
Substring with ascii - 3 recursive call
*/

#include "bits/stdc++.h"
using namespace std;

void subseq(string s1, string s2){
    if(s1.empty()) {
        cout<< s2 <<endl;
        return;
    }
    char c = s1.front(); 
    int asci = c;
    
    string ros = s1.substr(1);


    subseq(ros, s2);// call 1
  
    subseq(ros, s2+c);// call 2

    subseq(ros, s2 + to_string(asci)); // call 3
}

int main(){
    string s1 = "AB";
    string s2 = "";

    subseq(s1, s2);
}