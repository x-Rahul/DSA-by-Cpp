/*

Problem

Monk is a multi-talented person, and prepares results for his college in his free time.
He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. 
And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

Sample Input :
5
Eve 78
Bob 99
Alice 78
Rahul 80
Rahul 80

Sample Output :

Bob 99
Rahul 80
Rahul 80
Alice 78
Eve 78

*/



#include "bits/stdc++.h"
using namespace std;

int main(){

    map<int,multiset<string>> mp;

    int N = 3; cin>>N;
    while (N--)
    {
        string str; cin>>str;
        int n; cin>>n;
        mp[n].insert(str); // Method 0,1
        // mp[-1*n].insert(str); // method 2
             
    }
    // Method 0
    // auto curr_it = --mp.end();
    // while (true)
    // {
    //     auto &students = curr_it->second;
    //     auto marks = curr_it->first;
    //     for(auto &i : students) cout<< i << " " << marks <<endl;

    //     if(curr_it == mp.begin()) break;
    //     curr_it--;
    // }
    
    // Method 1
    // map<int,multiset<string>> :: reverse_iterator it;
    // for(it = mp.rbegin(); it!= mp.rend(); it++){
    //     auto &students = it->second;
    //     auto    &marks = it->first;
    //     for(auto &i : students) cout<< i << " " << marks <<endl;
    // }

    map<int,multiset<string>> :: reverse_iterator it;
    for(it = mp.rbegin(); it!= mp.rend(); it++){
        for(auto &i : it->second) cout<< i << " " << it->first<<endl;
    }
    
    // // Method 2
    // for(auto &i: mp){
    //     for(auto &student : i.second) cout<< student << " " << -1*(i.first)<<endl;
    // }
}
        