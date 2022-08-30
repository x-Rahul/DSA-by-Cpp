#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num, rev = 0;
    cin>>num;

    while (num>0)
    {
        int last_dig = num%10;
        rev = rev*10 + last_dig;
        num = num/10;
    }
    cout<<rev<<endl;
    
    return 0;
}