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

int Diameter(Node *root, int *height){
    if(root == NULL){
        *height == 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int ld = Diameter(root->left, &lh);
    int rd = Diameter(root->right, &rh); 
    int cd = lh+rh+1;

    *height = max(lh, rh) + 1; // to calculate height
    
    return max(cd, max( Diameter(root->left, &lh), Diameter(root->right, &rh) )); // max( cd, max(ld,rd) )
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

    int height = 0;
    cout<<Diameter(root, &height);
    return 0;
}