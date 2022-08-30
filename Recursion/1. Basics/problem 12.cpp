// printing sub-strings

#include<bits/stdc++.h>
using namespace std;

void subString(string str, string ans){
    
    if (str.length()==0){
        cout<<ans<< " ";
        return;
    }

    char ch = str[0];
    subString(str.substr(1), ans);
    subString(str.substr(1), ch+ans);

}

int main(){
    subString("ABC","");
    return 0;
}