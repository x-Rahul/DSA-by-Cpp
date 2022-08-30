#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a, b, c;
    cin>>a>>b>>c;

    if (a>b){
        if (a>c){
            cout<<"Greter is : "<< a <<endl; 
        }
        else{
            cout<<"Greter is : "<< c <<endl;
            }
    }
    else{
        if(b>c){
            cout<<"Greater is : "<<b<<endl;
        }
        else{
            cout<<"Greter is : "<< c <<endl;
        }
    }
    
    return 0;
}