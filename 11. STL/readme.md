# STL

1. Containers
2. Iterators
3. Algorithms
4. Functors

## 1. Containers

- Sequential
    - Vector
    - Stack
    - Queue
    - pair (not a container)

- Ordered
    - Maps
    - Mulimaps
    - Set
    - Multisets

- Unorderd
    - unordered Map
    - unordered Set

### 1.1 Nested Container

```cpp
vector <vector<int>>
map <int, vector<int>>
set <pair<int, string>>
vector <map<int, set<int>>>
```

## Iterators

- Iterators are similar to Pointers but implemented on stl and points to memory address of containers.
- begin(), end()
```cpp
vector <int>::iterator it;
``` 
## 3. Algorithms

- Upper bound
- lower bound
- Sort(comparator)
- max_element
- min_element
- accumulate
- reverse
- count
- find
- next_permutations
- prev_permutations

## Functors

- Classes which acts as functions