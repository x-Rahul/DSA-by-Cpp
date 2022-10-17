# include "bits/stdc++.h"
using namespace std;

void Solution(vector<int> stack1, vector<int> stack2, vector<int> stack3, vector<int> stack4){

    // int minVal = min(stack3.back(), min(stack1.back(), stack2.back()));

    // if(find(stack1.begin(), stack1.end(), minVal) != stack1.end()) stack4.push_back(1);
    // else if(find(stack2.begin(), stack2.end(), minVal) != stack2.end()) stack4.push_back(2);
    // else stack4.push_back(3);
    
    // for(auto i: stack4) cout<<i <<" ";
    while (!stack1.empty() or !stack1.empty() or !stack3.empty())
    {
        int minVal = min(stack3.back(), min(stack1.back(), stack2.back()));

        if(find(stack1.begin(), stack1.end(), minVal) != stack1.end()) {
            stack4.push_back(1); stack1.pop_back();
            }
        else if(find(stack2.begin(), stack2.end(), minVal) != stack2.end()) {
            stack4.push_back(2); stack2.pop_back();
            }
        else {
            stack4.push_back(3);
            stack3.pop_back();
            }
    }
    for(auto i: stack4) cout<<i <<" ";
}

int main(){
    int n1, n2, n3; cin>>n1>>n2>>n3;
    vector<int> v1(n1), v2(n2), v3(n3), v;
    for(auto &i:v1) cin>>i;
    for(auto &i:v2) cin>>i;
    for(auto &i:v3) cin>>i;

    reverse(v1.begin(), v1.end()); reverse(v2.begin(), v2.end()); reverse(v3.begin(), v3.end());
    Solution(v1,v2,v3,v);
}