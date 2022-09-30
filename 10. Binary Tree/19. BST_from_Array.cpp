# include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


Node * insertBST(Node *root, int value){
    if(root== NULL) return new Node(value);
    if(value < root->data) root->left = insertBST(root->left, value);
    if(value > root->data) root->right = insertBST(root->right, value);
    return root;
}

void inOrder(Node *root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<< " ";
    inOrder(root->right);
}

int main(){
    Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    inOrder(root);

    return 0;
}