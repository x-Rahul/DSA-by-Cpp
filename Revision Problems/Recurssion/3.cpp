#include<bits/stdc++.h>
using namespace std;

auto first_occur(int arr[],int idx, int n, int key){
    if(idx == n) return -1;
    if(arr[idx] == key ) return idx;
    return first_occur(arr,idx+1, n, key);
}

auto last_occur(int arr[],int idx, int n, int key){
    if(idx == n) return -1;
    auto last = last_occur(arr,idx+1, n, key);
    if(last != -1) return last;
    if(arr[idx] == key) return idx;
    return -1;
}

int main(){
    int n = 7, key= 2;
    int arr[n] = {4,2,1,2,5,2,7};
    int f = first_occur(arr,0, n, key);
    int l = last_occur(arr,0, n, key);
    cout<< f << l;
}