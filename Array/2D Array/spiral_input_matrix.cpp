#include<bits\stdc++.h>
using namespace std;

int main()
{   
    int n, m;
    cin>>n>>m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    

    int row_s = 0, row_e = n-1, col_s = 0, col_e = m-1;

    while(row_s <= row_e && col_s <= col_e)
    {
        //for top row
        for (int j = col_s; j <= col_e; j++)
        {
            cout<<a[row_s][j]<<" ";
        }
        row_s++;

        //for right column
        for (int i = row_s; i <= row_e; i++)
        {
            cout<<a[i][col_e]<<" ";
        }
        col_e--;
        //for bottom row
        for (int j = col_e; j >= col_s; j--)
        {
            cout<<a[row_e][j]<<" ";
        }
        row_e--;
        //for left column
        for (int i = row_e; i >= row_s; i++)
        {
            cout<<a[i][col_s]<<" ";
        }
        col_s++;
    
    }
    return 0;
}