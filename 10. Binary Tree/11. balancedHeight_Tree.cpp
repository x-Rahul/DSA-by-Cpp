/*
balanced if abs(lHeight-rHeight) <= 1.
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

// int height(Node* root){
//     if (root == NULL) return 0;
//     return max(height(root->left), height(root->right))+1;
// }
// bool isBalanced(Node *root){
//     if(root == NULL) return true;
//     if(!isBalanced(root->left) or !isBalanced(root->right)) return false;

//     if( abs(height(root->left) - height(root->right)) <= 1 ) return true; 
//     else return false;
// }


// time Complexity O(n)
bool isBalanced(Node *root, int *height){
    if (root == NULL) return true;
    int lh = 0, rh = 0;

    if(!isBalanced(root->left, &lh) or !isBalanced(root->right, &rh)) return false;
    *height = max(lh, rh)+1;
    if( abs(lh-rh) <= 1 ) return true; 
    else return false;
}


int main(){

    struct Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);
    int height = 0;
    cout<< "Tree-II output: " << isBalanced(root1, &height) <<endl;

    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);

    cout<< "Tree-II output: " <<isBalanced(root2, &height) <<endl;
    return 0;
}