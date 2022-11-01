#include "bits/stdc++.h"
using namespace std;

int main(){
    string s = "aabbbcccchhhhhh";
    vector<int> freq(26);

    for(int i = 0; i<s.length(); i++){
        freq[s[i] - 'a']++;
    }
    int idx = max_element(freq.begin(), freq.end()) - freq.begin();
    cout<< char(idx+'a');
}