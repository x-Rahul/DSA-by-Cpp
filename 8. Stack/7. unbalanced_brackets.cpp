#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{' or s[i] == '(' or s[i] == '[')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {   return false;
                break;
            }
        }
        else if (s[i] == '}')
        {
           if (!st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else
            {   return false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {   return false;
                break;
            }
        }
    }
    if(st.empty())
        return true;

    return false;
}
int main()
{
    string s = "[([{}])]";
    if (isValid(s))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}