#include "bits/stdc++.h"
using namespace std;

struct Node
{   
    int data;
    struct Node *left;
    struct Node *right;

    // contructor 
    Node(int value){
        data = value;
        left = NULL;
        right =NULL;
    }
};

int search(int curr, int inorder[], int start, int end){
    for (int i = start; i <= end; i++){
        if(inorder[i] == curr)
            return i;
    }
    return -1;
}

Node *buildTree(int preorder[], int inorder[], int start, int end){
    

    if(start > end)
        return NULL;
    static int idx = 0;
    int curr = preorder[idx];
    idx++;
    Node *node = new Node(curr);


    if(start == end)
        return node;
    
    int pos = search(curr, inorder, start, end);
    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder,pos+1, end);

    return node;

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
    
    //build Tree
    Node *root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}

