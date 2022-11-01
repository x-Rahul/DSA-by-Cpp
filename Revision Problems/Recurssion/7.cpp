#include "bits/stdc++.h"
using namespace std;

string removeDup(string s){
    if(s.empty()) return "";
    
    char c = s.front();
    string sub = removeDup(s.substr(1));

    if(c == sub.front()) return sub;
    else return c+sub;
    
}

int main(){

    string s = "aaaaaabbbbaaaabrbbbccceeeeddfdfffff";
    removeDup(s);

}