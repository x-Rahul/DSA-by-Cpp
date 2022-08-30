#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    int cur_sum = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i<n; i++){
        cur_sum += a[i];
        
        if(cur_sum < 0){
            cur_sum = 0;
        }
        max_sum = max(max_sum, cur_sum);
    }
    cout<<max_sum<<endl;
    return 0;

}