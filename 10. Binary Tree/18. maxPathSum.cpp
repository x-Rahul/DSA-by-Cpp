/*
Maximum possible sum of a path in the binary tree, starting & ending at any node.

output : 42
*/

/*
For each node, compute sum
    1. If the root is NULL, return 0(Base Case)
    2. Call the recursive function to find the max sum for the left and the right subtree
    3. In a variable store the maximum of (root->data, maximum of (leftSum, rightSum) + root->data)
    4. In another variable store the maximum of previous step and root->data + leftSum + rightSum
    5.  Return the maximum of the previous step
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


int MaxPathSum(Node *root, int &ans){
    if (root == NULL) return 0;

    int left = MaxPathSum(root->left, ans);
    int right = MaxPathSum(root->right, ans);
    
    int nodeMax = max(
                    max(root->data + left,  root->data + right),
                    max(root->data,  root->data + left + right));
    ans = max(ans, nodeMax);


    // Now we need only single path max value. Not overall tree max value.
    // Max Top represents the sum when the Node under
    // consideration is the root of the maxsum path and no
    // ancestors of root are there in max sum path
    int singlePathSum = max(root->data, max(root->data + left,  root->data + right));
    return singlePathSum;
}


int main(){

    struct Node* root = new Node(10 );
    root->left = new Node(2);
    root->right = new Node(10);
    root->left->left = new Node(20);
    root->left->right = new Node(1);
    root->right->right = new Node(-25);
    root->right->right->left = new Node(3);
    root->right->right->right = new Node(4);

    int ans = INT_MIN;
    MaxPathSum(root, ans);

    cout<<endl;
    cout<<ans;
}