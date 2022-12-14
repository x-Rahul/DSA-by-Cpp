#include<bits/stdc++.h>
using namespace std;

int rainWater(vector<int> a){
    stack<int> st;
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        while (!st.empty() and a[st.top()] < a[i]) // CONDITION FOR CONTAINER
        {
            int curr = st.top();
            st.pop(); 
            if(st.empty()){
                break;
            }
            int length_container = i - st.top() - 1;
            ans += ( min(a[st.top()], a[i]  ) - a[curr] )*length_container;

        }
        st.push(i);
    }
    return ans;
}

int32_t main(){
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rainWater(a);
}