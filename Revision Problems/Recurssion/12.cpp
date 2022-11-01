/*
Find number of time name appear in the string
*/

#include "bits/stdc++.h"
using namespace std;

int Occur(string str, string name){

    if(str.length() == 0) return 0;

    int ans = 0;
    size_t found = str.find(name);
    if(found != string::npos) {
        ans++;
        str.erase(found, name.length());
        return ans + Occur(str, name);
    }
    return 0;
}

int main(){
    string str= "timehshftimuhstimhfhstimfs";
    string name = "tim";

    int ans = Occur(str, name);
    cout<<ans;

}