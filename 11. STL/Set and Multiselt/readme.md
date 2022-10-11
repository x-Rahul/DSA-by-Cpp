# Set
1. Ordered Set
2. Unordered Set

## Ordered Set

- Contains unique elements
- Implemented using balanced BST
- Elements are in sorted order
- Random access is not possible, i.e you cannit get i'th element in O(1) / O(Log N)
- Present in #include<set> header file

```c++
set<insert> s;
s.insert(1);
s.insert(2);
s.insert(2);
s.insert(4);

// Printing the element in the set
for(auto i : s) cout <<i;
cout<<endl;

for(auto i : s.begin(); i != s.end(); i++) cout <<i*;
cout<<endl;

// Printing in reverse Order
for(auto i : s.rbegin(); i != s.rend(); i++) cout <<i*;
cout<<endl;

//size of the Set
cout<<s.size()<<endl;
``` 