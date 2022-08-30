// String permutation


#include<bits/stdc++.h>
using namespace std;

void permutation(string str, string ans){

    if(str.length()==0){
        cout<<ans<< " ";
        return;
    }
    char ch = str[0];

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        string ros = str.substr(0,i) + str.substr(i+1);
        permutation(ros, ans+ch);
    }
    
}


int main(){
    permutation("ABC", "");
    return 0;
}