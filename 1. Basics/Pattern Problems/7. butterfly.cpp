/*
Half butterfly
input:
3

9
2
5

Output: 

*################*
**##############**
***############***
****##########****
*****########*****
******######******
*******####*******
********##********
******************

*##*
****

*########*
**######**
***####***
****##****
**********

*/


#include <iostream>
using namespace std;
int main() {
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
		for (int i = 0; i < n; i++){
			for(int j = 0; j<=i; j++) cout<<'*';
			for(int j = 0; j< 2*(n-i-1); j++) cout<< '#';
			for(int j = 0; j <= i; j++) cout<< '*';
			cout<<endl;
		}
		// // for full  butterfly
		// for (int i = n-1; i >=0; i--){
		// 	for(int j = 0; j<=i; j++) cout<<'*';
		// 	for(int j = 0; j< 2*(n-i-1); j++) cout<< '#';
		// 	for(int j = 0; j <= i; j++) cout<< '*';
		// 	cout<<endl;
		// }
	}
}