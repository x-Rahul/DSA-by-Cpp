/*
strings
*/

#include "bits/stdc++.h"
using namespace std;


int main(){

    string s = "Hello_its_me";

    cout<<s.substr(6, 3) <<endl;
    cout<<s.insert(12, "_Rahul_Meena_25") <<endl;
    s.erase(18, 6);
    cout<<s <<endl;

    // int to string
    int n = 256;
    cout<< to_string(n) <<endl;

    //string to int
    string num = "12546";
    cout<< stoi(num)+2 <<endl;

    // sort string
    string message = "hello_its_me_492 + a / b - 36";
    sort(message.begin(), message.end());
    cout<< message <<endl;

    // upper and lower
    string s2 = "Hello_its_me Rahul";
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    cout<< s2 <<endl;

    // sorting descending order
    string s3 = "153848452904";
    sort(s3.begin(), s3.end(), greater<int> ());
    cout<< s3 << endl;

}