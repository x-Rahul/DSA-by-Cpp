/*

1
5 10 1
3 5
4 2
4 1
10 15
15 2

output : 50 6 15 149 9

2
5 5 0
1 1
2 1
3 3
3 2
5 5
5 1 3
4 2
7 1

Output : 5 5 15 10 25 2 1 0 0 3



*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    int T; cin>>T;
    while (T--)
    {   
        int N, K, W; cin>> N>>K>>W;
        vector<pair<int, int>> order;
        int n = N;;
        
        while (N--)
        {
            int x, y; cin>>x>>y;
            order.push_back({x,y});
        }

        int delay = 0;
        for(int i = 0 ; i<order.size(); i++){
            // cout<< order[i].first <<" "<< order[i].second<<endl;
            if(i == 0) delay = 0;
            else delay = delay + order[i-1].first + order[i-1].second - order[i].first;

            int money = K * order[i].second - W*delay;
            if(money<0) money = 0;
            cout<<money << " ";
        }

        // int delay = 0;
        // int orederNum = 0;
        // for(auto i: st) {
        //     cout<<i.first<< " " << i.second <<endl;
        // }
    }
    
}