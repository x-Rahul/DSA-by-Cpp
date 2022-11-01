/*

Kadane's Algo to find max Subarray sum

*/


#include "bits/stdc++.h"
using namespace std;

int main(){
    vector <int> v = {-1,4,-6,7,-4};
 

    int sum = 0, maxSum = 0;
    for(int i  = 0; i<v.size(); i++){
        sum += v[i];
        if(sum <= 0) sum = 0;
        maxSum = max(maxSum, sum);
    }
    cout<<maxSum;

}