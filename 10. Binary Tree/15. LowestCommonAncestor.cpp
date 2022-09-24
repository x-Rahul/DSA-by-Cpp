#include "iostream"
#include "vector"
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = NULL;
        right =NULL;
    }
};


 
int LCA(Node *root, int n1, int n2){
    vector<int> path1, path2;

    if(!getPath(root, n1, path1)  or !getPath(root, n2, path2)) return -1;
    
    int pc;
    for(int pc = 0; pc < path1.size() and path2.size(); pc++ ){
        if(path1[pc] != path2[pc]) break;
    }
    return path1[pc-1];

}
