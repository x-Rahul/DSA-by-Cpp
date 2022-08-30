# include <bits/stdc++.h>
using namespace std;

int main(){


freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

int n,num, sum = 0;
cin>>n;
num = n;

while(n>0){
    int dig = n%10;
    sum = sum + pow(dig,3);
    n = n/10;
}

if(num == sum){
    cout<<"This is a Armstrong Number"<<endl;
}
else{
    cout<<"Not a Armstrong number"<<endl;
}

}