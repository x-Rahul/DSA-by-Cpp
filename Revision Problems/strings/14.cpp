// Find and replace a word in a string
/*
Hello its a lovely day!
lovely wonderfull
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s1, s2, s3;
    getline(cin, s1);
    cin>>s2;
    cin>>s3;
    

    string ans;

    size_t found = s1.find(s2);
    if(found != string::npos){
        s1.replace(found, s2.length(), s3);
        cout<<s1<<endl;
    }
        
}