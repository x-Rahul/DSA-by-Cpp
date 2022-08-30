
#include<bits\stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    const int N = 100;
    int I[N];
    for (int i = 0; i < N; i++)
    {
        I[i] = -1;
    }

    int min_i = INT_MAX;
    for(int i = 0; i< n; i++){
        if (I[A[i]] != -1)
        {
            min_i = min(min_i, I[A[i]]);  
        }
        else{
            I[A[i]] = i;
        }
    }

    if(min_i == INT_MAX){
        cout<<"nill"<<endl;
    }
    else{
        cout<<min_i + 1<<endl;
    }

    return 0;
}