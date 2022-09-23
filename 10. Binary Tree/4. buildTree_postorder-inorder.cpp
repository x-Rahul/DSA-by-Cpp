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

int search(int curr, int inorder[], int start, int end){
    for (int i = start; i <= end; i++){
        if(inorder[i] == curr)
            return i;
    }
    return -1;
}

Node *buildTree(int postorder[], int inorder[], int start, int end){
    

    if(start > end)
        return NULL;

    static int idx = 4;
    int curr = postorder[idx];
    idx--; 
    Node *node = new Node(curr);

    if(start == end)
        return node;
    
    int pos = search(curr, inorder, start, end);
    node->right = buildTree(postorder, inorder,pos+1, end);
    node->left = buildTree(postorder, inorder, start, pos-1);
    
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
    
    //build Tree
    Node *root = buildTree(postorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}

