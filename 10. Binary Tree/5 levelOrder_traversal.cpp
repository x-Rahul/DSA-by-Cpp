
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

    while (!Q.empty())
    {
        cout<<Q.front()->data<<" ";
        if(Q.front()->left) Q.push(Q.front()->left);
        if(Q.front()->right) Q.push(Q.front()->right);
        Q.pop();
        
    }
    cout<<endl;
    
}


int32_t main(){
    // Node *root = new Node(1);

    // root->left = new Node(2);
    // root->right = new Node(3);

    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);

    struct Node *root = new Node(5);

    root->left = new Node(6);
    root->right = new Node(3);

    root->left->left = new Node(9);
    root->left->right = new Node(1);
    root->right->left = new Node(2);
    root->right->right = new Node(1);

    root->left->right->left = new Node(2);
    root->left->right->left->left = new Node(3);
    root->left->right->left->right = new Node(5);

    root->right->left->right = new Node(6);
    root->right->left->right->right = new Node(7);


    // Level Order Traversal
    levelOrder(root);
    return 0;
}