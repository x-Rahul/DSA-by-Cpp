#include <bits/stdc++.h>
using namespace std;

// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 

int factorial(int n)
{   int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    
    return fact;
}


int main(){
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;

    for (int i = 0; i <= n; i++){
        for (int j = 0; j<=i; j++)
        {
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        }
        cout<<endl; 
    }
    


    return 0;
}
