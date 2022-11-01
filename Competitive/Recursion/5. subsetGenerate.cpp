#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> output;

void subsetGenerate(vector<int> &subset, vector<int> &nums, int i){

    // base case
    if(i == nums.size()) {
        output.push_back(subset); return;
    }

    // Not considering
    subsetGenerate(subset, nums, i+1);

    //Considering the element
    subset.push_back(nums[i]); 
    subsetGenerate(subset, nums, i+1);
    subset.pop_back();
}

int main(){
    int n; cin>>n;
    vector<int> nums(n);
    for(auto i: nums) cin>>i;

    vector<int> empty; 
    subsetGenerate(empty, nums, 0);

    for(auto subset: output){
        for (auto ele : subset){
            cout << ele << " ";
        }
        cout<<endl;
    }
}