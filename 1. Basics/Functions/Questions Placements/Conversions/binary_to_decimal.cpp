#include<bits/stdc++.h>
using namespace std;

int bin_dec(int n){

    int ans = 0, x = 1;

    while(n>0){

        int last_dig = n%10;
        ans = ans + last_dig*x;
        x = x*2;
        n/=10;
    }
    return ans;
}
main()
{
    int n;
    cin>>n;

    cout<<bin_dec(n);
} 