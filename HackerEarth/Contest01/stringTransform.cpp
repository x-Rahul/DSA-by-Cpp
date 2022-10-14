/*
Input :
    hello it's me, Rahul

Output :
    HELLO
    IT'S
    ME,
    RAHUL
*/


#include "bits/stdc++.h"
using namespace std;

int main(){
	string s; getline(cin,s);
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	for(auto i:s){
		if(i == ' ') cout<<endl;
		else cout<<i;
	}
}