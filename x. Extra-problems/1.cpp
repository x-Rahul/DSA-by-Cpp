#include "bits/stdc++.h"

using namespace std;

int main(){

	int T; cin >>T;
	while(T--){
		int n;cin>>n;
		string s,s2; cin >>s;
		int dec = 0;
		
		for(int i= 0; i<s.size(); i++){
			if (s[i]=='1')dec += pow(2, s.size()-i-1);
		}
		cout<< dec <<endl;
	}
	return 0;
}