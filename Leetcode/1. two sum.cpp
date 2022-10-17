#include <bits/stdc++.h>
using namespace std;


vector<int> twoSumBrute(vector<int> nums, int target){
    vector<int> v(2);
    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target) {
                v[0] = i; v[1] = j;
            }
        }
    }
    return v;
}

vector<int> twoSumMap(vector<int> nums, int target){
    
    unordered_map<int, int> mp;

    for(int i = 0; i<nums.size(); i++){
        int curr = nums[i];
        int complement = target-curr;

        auto it = mp.find(complement);

        if(it != mp.end()) return {it->second, i}; // found
        mp[curr] = i; // not found
    }
    return {};
}

int main(){
    int T; cin>>T;

    while (T--)
    {   
        
        int n,t; cin>>n>>t;

        vector<int> v(n), ans;
        for(auto &i: v) cin>>i;
        
        // ans = twoSumBrute(v, t);

        // for(auto i:ans) cout<<i<< " ";
        // cout<<endl;

        ans = twoSumMap(v,t);
        for(auto i:ans) cout<<i<< " ";
        cout<<endl;

        
    }
    
}