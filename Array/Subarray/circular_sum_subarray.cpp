#include<bits\stdc++.h>
using namespace std;


int kadane(int x[], int n)
{
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i<n; i++){
        curr_sum += x[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}


int main()
{   
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    int wrap_sum;
    int non_wrap;

    non_wrap = kadane(a, n);

    int arr_sum = 0;
    for(int i = 0; i<n; i++){
        arr_sum += a[i];
        a[i] = -a[i];
    }

    wrap_sum = arr_sum + kadane(a, n);

    cout<<"Maximum Subarray Sum : " << non_wrap <<endl;
    cout<<"Maximum Circular Subarray Sum : "<< max(wrap_sum, non_wrap) <<endl;

    return 0;
}