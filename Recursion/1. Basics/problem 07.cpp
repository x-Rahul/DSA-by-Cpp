// Reversing a string:

#include<bits/stdc++.h>
using namespace std;

void rev_method_1 (string str, int pos){
    if(pos == str.length()){
        return;
    }
    rev_method_1(str, pos+1);
    cout<<str[pos];
}

void rev_method_2 (string str){
    if(str.length() == 0){
        return;
    }
    rev_method_2(str.substr(1));
    cout<<str[0];
}
int main(){
    string str = "Rahul_Meena";
    rev_method_1 (str, 0); cout<<endl;
    rev_method_2 (str);
    return 0;
}
