// Form the biggest number from the given number string

# include<bits\stdc++.h>
using namespace std;

int main()
{   
    string s = "52647";
    sort(s.begin(), s.end(), greater <int>());
    // s.reserve();
    cout<<s<<endl;
    return 0; 
}