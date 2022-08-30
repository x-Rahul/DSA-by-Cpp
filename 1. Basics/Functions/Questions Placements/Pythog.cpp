#include<bits/stdc++.h>
using namespace std;


bool check(int x, int y, int z)
{
    int a = max(x, max(y, z)), b, c;

    if(a == x){
        b = y;
        c = z;    
    }else if(a == y){
        b = x;
        c = z;
    }else{
        b = x;
        c = y;       
    }

    if(a*a == b*b + c*c){
        return true;
    }else{
        return false;
    }
}

main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int p, q, r;
    cin>>p>>q>>r;

    if(check(p, q, r)){
        cout<<"Pythogorian tripplet"<<endl;
    }else{
        cout<<"Not a Pythogorian tripplet"<<endl;
    }
}