#include "bits/stdc++.h"
using namespace std;

vector<int> NGE (vector <int> v){
    vector <int> nge(v.size());
    stack<int> st;

    for(int i = 0; i < v.size(); i++){
        // assign nest greater to stack elements while
        while (!st.empty() and  v[i] > v[st.top()])
        {
            nge[st.top()] = i; st.pop(); // Assign
        }
        st.push(i);
    }
    //for remaining elements
    while (!st.empty())
    {
        nge[st.top()] = -1; st.pop();
    }
    return nge;
}

int main(){

    int n;cin>>n;
    vector<int> v(n);
    for (auto &i : v) cin>>i;
    vector <int> nge = NGE(v);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<< " " <<  (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }
}