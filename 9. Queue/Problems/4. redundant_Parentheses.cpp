/*
Given a valid mathematical expression, find whether it have redundant parentheses or not.
It contain the following operators - '+','-','*','/' .
*/

// Input : "((a+b))"
// Output : 1

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    string s; cin>>s;
    stack<char> st;

    bool ans = false;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/'){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if (s[i] == ')'){
            if(st.top() == '('){
                ans = true;
            }
            while (st.top() == ('+' or '*' or '-' or '/'))
            {
                st.pop();
            }
            st.pop();
            
        }
    }
    cout<<ans;
    
}