// replacing successive two characters in a string :

#include<bits/stdc++.h>
using namespace std;

void replace (string str){
    if (str.length() == 0){
        return;
    }
    if(str[0] == 'p' && str[1] == 'i'){
        cout<<"3.14";
        replace (str.substr(2));
    }
    else{
        cout<<str[0];
        replace (str.substr(1));
    }
}

int main()
{
    string str = "pippxxppiixipi";
    replace(str);
    return 0;
}