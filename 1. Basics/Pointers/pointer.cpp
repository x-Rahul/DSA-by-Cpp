# include<bits\stdc++.h>
using namespace std;

// int main()
// {
//     int a = 10;
//     int *ptr = &a;
//     int **qtr = &ptr;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<qtr<<endl;
//     cout<<*qtr<<endl;
//     cout<<**qtr<<endl;
// }

void increment(int a){
    a++;
}
int main()
{
    int a = 2;
    increment(a);
    cout<<a<<endl;
    // Output is 2 instead of 3 as we are sending only value of a.
    return 0;
}