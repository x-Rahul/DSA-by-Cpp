# include<bits\stdc++.h>
using namespace std;


int bin_search(int arr[], int n, int key)
{
    int f = 0, l = n;
    while(f <= l)
    {
        int m = (f+l)/2;

        if(arr[m] == key){
            return m;
        }
        else if(arr[m] > key){
            l = m-1;
        }
        else{
            f = m+1;
        }

    }
    
    return -1;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cin>> key;

    cout<<bin_search(arr, n, key)<<endl;

    return 0;
}