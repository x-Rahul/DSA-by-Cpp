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

int Height(Node *root){
    if(root == NULL) return 0;
    return max(Height(root->left), Height(root->right)) + 1;
}

int main(){
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

    cout<<Height(root);
    return 0;
}