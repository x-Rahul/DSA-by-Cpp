#include "bits/stdc++.h"
using namespace std;

bool iseasable(int vector<int> v, int k, int mid){
    int pos = v[0], nums = 1;
    for(auto &ele: v){
        if(ele - pos >= min){
            pos = ele;
            nums++;
            if(nums == k) return true;
        }
    }
    return false;
}

// by binary search
int largestMinDist(vector<int> v, int k){
    int result = -1;
    int l = v[0], r = [n-1];
    while(l < r)
    {
        mid = (l+r)/2;
        if(iseasable(vector<int> v, k, mid)) {
            result = max(result, mid);
            l = mid+1;
        }
        else r = mid;   
    }
    return result;
}
int main(){
    int k = 3;
    vector<int> v = {1,2,5,7,11,12};
    sort(v.begin(), v.end());
    largestMinDist(v, k);

}