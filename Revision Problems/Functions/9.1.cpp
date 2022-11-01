// Two Pointer approuch O(n)

#include "bits/stdc++.h"
using namespace std;

int main(){
    vector<int> v = {1,2,3,7,5};
    int key = 12;

    int currSum = 0; 
    int s = -1, e = -1, sum = 0;
    int i = 0, j = 0;

    while (j< v.size() and sum + v[j] <=  key)
    {
        sum += v[j]; j++;
    }
    if(sum == key){ 
        cout<< i+1 << j << endl;
        return 0;
    }

    while (j < v.size())
    {
        sum += v[j];
        while (sum > key)
        {
            sum -= v[i];
            i++;
        }
         if(sum == key){ 
            s = i+1;
            e = j+1;
            break;
        }
        j++;
        
    }
    
    cout<<s<< " "<<e <<endl;

    
}