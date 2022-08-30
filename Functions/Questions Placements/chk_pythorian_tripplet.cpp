#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int max (int x, int y, int z){
    if (x>y){
        if(x>z){
            return x;
        }
        else{
            return z;
        }
    }
    else{
        if(y>z){
            return y;
        }
        else{
            return z;
        }
    }
}

bool chk_pythog (int x, int y, int z){
    int p = max(x,y,z);
    if(p==x && (pow(x,2) == pow(y,2) + pow(z,2))){
        return true;
    }
    else if(p==y && (pow(y,2) == pow(x,2) + pow(z,2))){
        return true;
    }

    else if(p==z && (pow(z,2) == pow(y,2) + pow(x,2))){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a, b, c;
    cin>>a>>b>>c;
    if(chk_pythog(a,b,c)){
        cout<<"Pythogorian tripplet";
    }
    else{
        cout<<"Not a Pythogorian tripplet";
    }
    return 0;
}