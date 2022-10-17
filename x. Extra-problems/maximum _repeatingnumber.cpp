// CPP program to find the most frequent element
// in an array.
#include <bits/stdc++.h>
using namespace std;

int maxCount(vector<int> v)
{
	// code here
    int n = v.size();
	int maxcount = 0;
	int element_having_max_freq;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (v[i] == v[j]) count++;
		}
		if (count > maxcount) maxcount = count;
	}
	return maxcount;
}

// Driver program
int main()
{
	vector<int> v = { 40, 50, 30, 40, 50, 30, 30 };
	cout << maxCount(v);
	return 0;
}

// This code is contributed by Arpit Jain
