#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    vector<int> v(N);
    for(auto &i : v) cin>>i;
    // sort(v.begin(), v.end());
    int mx = 0;
    for(int i = 0; i<N-1; i++){
        int key  = v[i+1] - v[i];
        int flag = 0, count = 1;
        for(int j = i; j < N-1; j++){
            if (v[j+1]- v[j] == key) {
                count++;
            }
            else {
                j = N;
            }

        }
        mx = max(mx, count);
    }

    cout<<mx<<endl;
}