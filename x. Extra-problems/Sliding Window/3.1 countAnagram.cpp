#include<bits/stdc++.h>
using namespace std;

int countOccurance(string s, string keyS){
    unordered_map<char, int> mp;
    int ans = 0;
    
    //storing the occ. of string keyS in the map
    for (auto &i : keyS){
        mp[i]++;
    }

    int count = mp.size();
    int k = keyS.size();
    int i=0, j=0;

    while (j < s.size()){
        //calculation part
        if (mp.find(s[j]) != mp.end()){
            mp[s[j]]--;
            if (mp[s[j]] == 0){
                count--;
            }
        }

        //window length not achived yet
        if (j-i+1 < k){
            j++;
        }

        //window length achived, find ans and slide the window
        else if (j-i+1 == k){
            //finding the ans
            if (count == 0){
                ans++;
            }
            if (mp.find(s[i]) != mp.end()){
                mp[s[i]]++;
                if (mp[s[i]] == 1){
                    count++;
                }
            }

            //slide the window
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    string s = "aabaabaa";
    string keyS = "aaba";

    cout << countOccurance(s, keyS) << "\n";
    return 0;
}