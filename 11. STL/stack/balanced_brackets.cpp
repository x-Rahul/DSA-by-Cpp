/*
Input :
5
{(([])[])[]}
{(([])[])[]]}
{(([])[])[]}[]
{{([])}}
{{)[](}}

Output :
YES
NO
YES
YES
NO

*/

#include "bits/stdc++.h"
using namespace std;

// Method 1
string isBalanced(string s){
    stack<char> st;
    for(auto i:s){
        if(st.empty()) st.push(i);
        else if( (i == ']' and st.top() == '[')
                or (i == '}' and st.top() == '{')
                or (i == ')' and st.top() == '(') ) 
                st.pop();
        else st.push(i); 
    } 
    if(st.empty()) return "YES";
    return "NO";
}

//Method 2
string isBalanceD(string s){
    unordered_map<char, int> symbols = { {'[',-1}, {'{',-2}, {'(',-3}, 
                                    {']',1}, {'}',2}, {')',3} };
    stack<char> st;
    for(auto bkt : s){
        if(symbols[bkt] < 0) st.push(bkt);
        else {
            if (st.empty()) return "NO";
            char top = st.top(); st.pop();
            if(symbols[bkt] + symbols[top] != 0) return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}


int main(){
    int T ; cin>>T;
    while (T--)
    {
        string s; cin >> s;
        cout<<isBalanced(s)<<endl;
    }
    return 0;
}