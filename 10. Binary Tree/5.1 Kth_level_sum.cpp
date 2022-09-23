/*
steps
1. Make Empty Queue.
2. Insert root and NULL
3. remove elements from front and analyse 
    4. check if(left child exit){
                queue.push (element)
                }
             if (right child exit){
                queue.push(element)
             }
             else{
                print element
             }
             if(elememt == NULL){
                if(queue not empty){
                    queue.push(NULL)
                }
                else{
                    move to next level
                }
             }

*/


#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    // constructor
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

void levelOrder(Node *root){
    if(root == NULL) return;
    queue<Node*> Q;
    Q.push(root);

    int k = 3;// start from here
    while (!Q.empty())
    {
        cout<<Q.front()->data<<" ";
        if(Q.front()->left) Q.push(Q.front()->left);
        if(Q.front()->right) Q.push(Q.front()->right);
        Q.pop();
    }
    
}


int32_t main(){
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Level Order Traversal
    levelOrder(root);
    return 0;
}