#include<bits/stdc++.h>
using namespace std;

void dnfSort(int arr[], int n){
    int low = 0, mid = 0, high = n-1;
    while (mid<=high)
    {
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        if(arr[mid] == 1){
            mid++;
        }

        if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    

}
int main(){

    int arr[] = {0, 1, 1, 0, 0, 1, 1, 2, 2, 2};

    dnfSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}