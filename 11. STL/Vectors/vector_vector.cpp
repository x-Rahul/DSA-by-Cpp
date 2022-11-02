/*
Vector of vector
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<vector<int>> v;

    
    for(int i = 0; i<N; i++){
        int n; cin>>n;
        vector<int> temp;
        for(int j = 0; j < n; j++){
            int x; cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int  i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<< v[i][j] << " ";
        }
        cout<< endl;
    }
     
    
    
}