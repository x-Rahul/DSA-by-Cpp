#include "bits/stdc++.h"
using namespace std;

struct Node
{   
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = NULL, right =NULL;
    }
};

Node *buildTree(int preorder[], int inorder[], int s, int e){

    if(s > e) return NULL;
    static int idx = 0;
    int curr = preorder[idx];
    idx++;
    Node *root = new Node(curr);

    if(s == e) return root;
    
    // search root value in inorder array
    int pos;
    for (int i = s; i <= e; i++){
        if(inorder[i] == curr) pos = i;
    }

    root->left = buildTree(preorder, inorder, s, pos-1);
    root->right = buildTree(preorder, inorder,pos+1, e);

    return root;
}

void inorderPrint(struct Node *root){
    if(root == NULL)
        return;  
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    Node *root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}

