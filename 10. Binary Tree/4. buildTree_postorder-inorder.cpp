/*
Notes:
1---->The reason that right node is printed first is that in postOrder Sequence the follow up is:
        left right root... So when traversing from right to left we get the right node of the root

2---->Also we have used static int because static is used to make the variable stay in the memory and 
        it does not burst after the return of the function... So when recursively calling it does
        not have to initialise it to zero every time...

3---> We cannot build Tree using preOrder and postOrder... This is because the resultantn
        trees will be more than one combinations so we can't get a full and final tree 
        unless the tree is full Binary tree(in which every parent node has two child nodes)
*/

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

Node *buildTree(int postorder[], int inorder[], int s, int e){
    
    if(s > e) return NULL;

    static int idx = 4;
    int rootValue = postorder[idx];
    idx--;
    Node *node = new Node(rootValue);

    if(s == e) return node;
    
    int pos;
    for (int i = s; i <= e; i++){
        if(inorder[i] == rootValue) pos = i;
    }
    
    node->right = buildTree(postorder, inorder,pos+1, e);
    node->left = buildTree(postorder, inorder, s, pos-1);
    
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
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};
    int s = 0, e = 4;
    
    //build Tree
    Node *root = buildTree(postorder, inorder, s, e);
    inorderPrint(root);

    return 0;
}

