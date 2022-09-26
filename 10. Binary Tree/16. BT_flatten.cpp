/*
Given a binary tree, flatten it into linked list in-palce. 
After flattening, left of each node should point to NULL and right node should contain next node in preorder seequence.
(It's not allowed to use other data structures)

steps: 
1. Recursively, flatten the left and right sub tree.
2. Store the left tail and right subtail.
3. Store the right subtree in temp and make left subtrees as right subtree.
4. join right subtree (temp) with left tail.
5. return right tail.
*/

# include "bits/stdc++.h"
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

    void flatten(Node *root){
        
        if(root == NULL or (root->left == NULL and root->right == NULL)) return;

        if(root->left){
            flatten(root->left);

            Node *temp = root->right;
            root->right = root->left;
            root->left = NULL;

            // loop to find the tail of new right (which was left before) where we need to attach the temp
            Node *tail = root->right;
            while (tail->right) // till tail right != NULL
            {
                tail = tail->right;
            }
            tail->right = temp; // when tail right == NULL join temp.
        }

        flatten (root->right);
    }

    void inOrder(Node *root){
        if(root == NULL) return;
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }

int main(){

    Node *root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(5);
    root->left->left = new Node (1);
    root->left->right = new Node (3);
    root->right->right = new Node (6);
    flatten(root);
    inOrder(root);
    return 0;
}


 
