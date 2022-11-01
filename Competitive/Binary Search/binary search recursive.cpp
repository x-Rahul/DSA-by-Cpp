
#include <bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> v, int key, int s, int e)
{   
    if(e-s < 0) return -1;
   
    int mid = (s+e)/2;
    if (v[mid] == key) return mid+1;
        
    if (v[mid] > key)
        return binarySearch(v, key, s, mid - 1);
    return binarySearch(v, key, mid + 1, e);
}

int main()
{
	vector<int> v = {2,3,4,5,6,7};
    int key = 7; 
    cout<< binarySearch(v, key, 0, 5); // 1 based indexing
}
