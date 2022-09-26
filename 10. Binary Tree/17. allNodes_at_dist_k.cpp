// error : only calculating one side

#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

// case 1:
void subtreeNodes(Node *root, int k){
    if (root == NULL or k < 1) return;

    if(k == 0){
        cout << root->data << " ";
        return;
    }

    //  if k > 0
    subtreeNodes(root->left, k-1);
    subtreeNodes(root->right, k-1);
}

// case 2: return dist up to ancestors
int nodes_at_K(Node *root, Node *target, int k){
    if(root == NULL) return -1; // -1 means target not found.
    if (root == target) {
        subtreeNodes(root, k);
        return 0;
    }
    // for left
    int dl = nodes_at_K(root->left, target, k);
    if(dl != -1){
        // we found target at leftSubtree
        if(dl+1 == k) // current node is at kth distance
            cout<< root->data<<"  ";
        else
            subtreeNodes(root->right, k-dl-2); // extra 1 is aded because we are sending root.next so -2
        return 1+dl;
    }

    // for right
    int dr = nodes_at_K(root->right, target, k);
    if(dr != -1){
        // we found target at leftSubtree
        if(dr+1 == k) // current node is at kth distance
            cout<< root->data<<"  ";
        else 
            subtreeNodes(root->left, k-dr-2); // extra 1 is aded because we are sending root.next so -2
        return 1+dr;
    }

    return -1;
}



int main(){
    Node * root = new Node(20);
	root->left = new Node(8);
	root->right = new Node(22);
	root->left->left = new Node(4);
	root->left->right = new Node(12);
	root->left->right->left = new Node(10);
	root->left->right->right = new Node(14);
	Node * target = root->left->right;
	nodes_at_K(root, target, 2);
	return 0;
}