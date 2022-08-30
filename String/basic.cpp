# include<bits\stdc++.h>
using namespace std;

int main()
{   
    string s1= "abcdef";
    string s2= "xxanyonesdfsfsf";
    s1.clear();
    s2.erase(3, 4);// remove 4 char from index 3
    s2.insert(2, "lol");

    for(int i=0; i< s2.length(); i++)
    {
        cout<<s2[i]<<endl;
    }
    
    sort(s2.begin(), s2.end());
    cout<<s2<<endl;

    // lower case to upper case  and vice-versa
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    cout<<s2<<endl;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout<<s2<<endl;
    return 0; 
}