#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
    }
};

Node * preorderBST(int preorder[], int *Idx, int key, int min, int max, int n){
    
    if(*Idx >=n) return NULL; //base condition
    
    Node *root = NULL;
    if(key > min && key < max){
        root = new Node (key);
        *Idx += 1;

        // Buid for leftsubtree first
        if(*Idx < n) root->left = preorderBST(preorder, Idx, preorder[*Idx], min, key, n);
        // After lefttree call for rightsubtree
        if(*Idx < n) root->right = preorderBST(preorder, Idx, preorder[*Idx], key, max, n);
    }
    return root; // i.e. NULL
}

void preOrder(Node *root){
    if(root == NULL) return;
    cout<< root->data<< " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int Idx = 0;

    Node *root = preorderBST(preorder, &Idx, preorder[0], INT_MIN, INT_MAX, n);
    preOrder(root);
    return 0;
}