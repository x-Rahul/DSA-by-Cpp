#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){

    int n = 5;cin >> n;

    deque<int> A;
    for (int  i = 0; i < n; i++) {
        int num; cin>> num;
        A.push_back(num);
    }

    // subArray

    for (int s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            for (int k = s; k <= e; k++)
            {
                cout<<A[k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}