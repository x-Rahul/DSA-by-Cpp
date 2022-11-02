/*

After a hard day Vitaly got very hungry and he wants to eat his favorite potato pie. 
But it's not that simple. Vitaly is in the first room of the house with n room located in a line and
numbered starting from one from left to right. You can go from the first room to the second room, 
from the second room to the third room and so on — you can go from the (n - 1)-th room to the n-th room. 
Thus, you can go to room x only from room x - 1.

The potato pie is located in the n-th room and Vitaly needs to go there.
Each pair of consecutive rooms has a door between them. In order to go to room x from room x - 1, 
you need to open the door between the rooms with the corresponding key.

In total the house has several types of doors (represented by uppercase Latin letters) and 
several types of keys (represented by lowercase Latin letters). 
The key of type t can open the door of type T if and only if t and T are the same letter, 
written in different cases. For example, key f can open door F.

Each of the first n - 1 rooms contains exactly one key of some type that Vitaly can use to get to next rooms. 
Once the door is open with some key, Vitaly won't get the key from the keyhole but he will immediately run into the next room. 
In other words, each key can open no more than one door.

Vitaly realizes that he may end up in some room without the key that opens the door to the next room. 
Before the start his run for the potato pie Vitaly can buy any number of keys of any type that is guaranteed to get to room n.

Given the plan of the house, Vitaly wants to know what is the minimum number of keys he needs to buy to surely get to the room n, 
which has a delicious potato pie. Write a program that will help Vitaly find out this number.


Input

The first line of the input contains a positive integer n (2 ≤ n ≤ 105) — the number of rooms in the house.

The second line of the input contains string s of length 2·n - 2. 
Let's number the elements of the string from left to right, starting from one.

The odd positions in the given string s contain lowercase Latin letters — the types of the keys that lie in the corresponding rooms. 
Thus, each odd position i of the given string s contains a lowercase Latin letter — the type of the key that lies in room number (i + 1) / 2.

The even positions in the given string contain uppercase Latin letters — the types of doors between the rooms. 
Thus, each even position i of the given string s contains an uppercase letter — the type of the door that leads from room i / 2 to room i / 2 + 1.

3
aAbB

4
aBaCaB

5
xYyXzZaZ

Output

Print the only integer — the minimum number of keys that Vitaly needs to buy to surely get from room one to room n.

For test cases = 3

0

3

2

*/

#include "bits/stdc++.h"
using namespace std;

int reqKeys(string s){
    int ans = 0;

    unordered_map <char, int> Pocket;
    for(int i = 0; i < s.length()-1; i+=2){
        char currKey = s[i];
        Pocket[currKey]++;
        char door = s[i+1];
        char reqdoorkey = tolower(door);
        
        if(Pocket[reqdoorkey] >=1) Pocket[reqdoorkey]--;
        else ans+=1;
    }
    return ans;
}

int main(){
    int T; cin>>T;
    while (T--)
    {
        int N; cin>> N;
        string s; cin>>s;
        cout<<reqKeys(s) <<endl;
    }
}