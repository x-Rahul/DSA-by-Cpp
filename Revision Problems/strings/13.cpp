/*
Find number of time name appear in the string
*/

#include "bits/stdc++.h"
using namespace std;

int main(){
    string str= "timehssdgfastimhftimuhstimhfhstimfs";
    string name = "tim";

    int ans = 0;
    while (str.length() != 0)
    {
        size_t found = str.find(name);
        if(found != string::npos){
            ans++;
            str.erase(found, name.length());
        }
        else{
            break;
        }
    }
    cout<<ans;
}