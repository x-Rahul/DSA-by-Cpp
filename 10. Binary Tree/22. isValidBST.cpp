#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = NULL, right = NULL;
    }
};

// check for bst

bool isBST(Node *root, Node *minAllowed = NULL, Node *maxAllowed = NULL){

    if(root == NULL) return true; // base

    if(root != NULL && (root->data <= minAllowed->data || root->data >= maxAllowed->data)) return false;

    bool leftV = isBST(root->left, minAllowed, root);
    bool rightV = isBST(root->right, root, maxAllowed);

    return leftV and rightV;
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new No de(6);
    // root->right->right = new Node(7);

    cout<<isBST(root, NULL, NULL);

    return 0;
}