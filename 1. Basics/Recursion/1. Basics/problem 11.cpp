// Moving all 'x' to the last of the string:

#include <bits/stdc++.h>
using namespace std;

string moveX(string str){

    if (str.length() == 0){
        return "";
    }

    char ch = str[0];
    string ans = moveX(str.substr(1));

    if(ch == 'x'){
        return ans+ch;
    }
    return ch + ans;
}

int main(){

    cout<<moveX("dsxfnuxehncjxixh");
    return 0;
}