/*
Maximum possible sum of a path in the binary tree, starting & ending at any node.
*/

/*
For each node, compute sum
    1. Node Val
    2. Max path through left child + node val
    3. Max path through right child + node val
    4. Max path through left child + Max path through right child + node val
    calculate max of above all
*/

# include "bits/stdc++.h"
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node ( int value){
        data = value;
        left = NULL, right = NULL;
    }
};


int maxPathSumUtil(Node *root, int &ans){
    if (root == NULL) return 0;

    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);
    
    int nodeMax = max(
                    max(root->data + left,  root->data + right),
                    max(root->data,  root->data + left + right));
    ans = max(ans, nodeMax);
    int singlePathSum = max(root->data, max(root->data + left,  root->data + right));

    return singlePathSum;
}

int maxPathSum(Node *root){
    
    int ans = INT_MIN;
    maxPathSumUtil(root, ans);
    return ans;
}

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    cout<< maxPathSum(root);

    return 0;
}