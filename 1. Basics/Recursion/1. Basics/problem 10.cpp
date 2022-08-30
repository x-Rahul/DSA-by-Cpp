// Removing Duplicates from string

# include <bits/stdc++.h>
using namespace std;

string rmDup(string str){

    if(str.length()==0){
        return ""; // starting with empty string 
    }
    
    char ch = str[0];
    string ans = rmDup(str.substr(1));
    // cout<< ch<<endl;
    cout<< ans<<endl;
    if(ch == ans[0]){
        return ans;
    }
    return ch+ans;
}

int main(){

    cout<<rmDup("AABCCCCDDDEFGH");
    return 0;
}