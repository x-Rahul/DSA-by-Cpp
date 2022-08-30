// printing sub-strings

#include<bits/stdc++.h>
using namespace std;

void subString(string str, string ans){
    
    if (str.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = str[0];
    int code = ch;
    subString(str.substr(1), ans);
    subString(str.substr(1), ch + ans );
    subString(str.substr(1), to_string(code) + ans);
    
    
    
    

}

int main(){
    subString("AB","");
    return 0;
}