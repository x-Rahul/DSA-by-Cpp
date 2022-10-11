/* Shortest Distance between nodes

Find the distance between two nodes in a binary tree. The distance between two nodes is the minimum number of edges
to be traversed to reach one node from another.

*/

/*
    n1 and n2 are the nodes value
    steps :
    1. Find the lca of nodes n1 & n2.
    2. Find Distance b/w 
        (lca & n1) -> d1
        (lca & n2) -> d2
    3. reurn (d1+d2)
*/

/*
we are measuring distance in for of levels. 
The minimum distance b/w lca and node lying in the subtree is the number of levels between them. so distance = levels
*/



#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};


Node *LCA (Node *root, int n1, int n2){

    if (root == NULL)   return NULL;
    if(root->data == n1 or root->data == n2)  return root;

    Node *left = LCA(root->left, n1, n2);
    Node *right = LCA(root->right, n1, n2);

    if(left and right) return root;

    if(left) return left;
    return right;
}

int findDist(Node *root, int k, int dist){ //k - till what node we are finding the distance, dist - distance till now
    if (root == NULL) return -1;
    if(root->data == k) return dist;

    int left = findDist(root->left, k, dist+1);
    int right = findDist(root->right, k, dist+1);

    if(left != -1) return left;
    return right;
}


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->right->right = new Node(5);

    int n1 =4, n2 = 5;
    
    Node *lca = LCA(root,n1,n2);
    int d1 = findDist(lca, n1, 0);
    int d2 = findDist(lca, n2, 0);

    int ans = d1+d2;
    cout<<ans;
    return 0;
}