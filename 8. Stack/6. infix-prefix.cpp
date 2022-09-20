// error

#include<iostream>
#include<stack>
#include<math.h>
#include<algorithm>
using namespace std;

int preced(char c){
    if(c == '^'){
        return 3;
    }
    if(c == '/' || c == '*'){
        return 2;
    }
    if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixToPrefix(string s){

    reverse(s.begin(), s.end());
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a' && s[i] == 'z' || s[i] == 'A' && s[i] == 'Z'){
            result += s[i];
        }
        else if(s[i] == ')'){ 
            st.push(s[i]);
        }else if(s[i] == '('){
            while (!st.empty() || st.top() != ')')
            {
                result += st.top();
                st.pop();
            }  
            if(!st.empty()) {
                st.pop();
            }       
        }
        else{
            while (!st.empty() && preced(st.top()) >= preced(s[i]))
            {
                result += st.pop();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end()); 
        return result;
}

int main(){
    string s = "(a-b/c)*(a/k-l)";
    cout<<infixToPrefix(s)<<endl;
    return 0;
}