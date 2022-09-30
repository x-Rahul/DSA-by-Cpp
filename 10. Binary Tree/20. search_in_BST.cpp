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

Node *searchInBST(Node *root, int key){
    if(root == NULL) return NULL;
    if(root->data == key) return root;
    if(key < root->data) return searchInBST(root->left, key);
    return searchInBST(root->right, key);
}


// Node *inorderSucc(Node *root){
//     Node *curr = root;
//     while(curr && curr->left != NULL){
//         curr = curr->left;
//     }
//     return curr;
// }
Node* inorderSucc(Node* root){

    Node* curr=root;

    while(curr->left!=NULL){

        curr=curr->left;

    }

    return curr;

}

// delete in BST
Node *deleteInBST(Node *root, int key){

    if(key < root->data) {root->left = deleteInBST(root, key);}
    else if (key > root->data) {root->right = deleteInBST(root->right,key);}
    else{
        // case 2
        if(root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        // case 3:
        Node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);

    }
    return root;
}

void inOrder(Node *root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<< root->data<< " ";
    inOrder(root->right);
}

int main(){
    Node *root = new Node(3);
    root->left = new Node(2);
    root->left->left = new Node(1);

    root->right = new Node(7);
    root->right->left = new Node(5);
    root->right->left->left = new Node(4);
    root->right->left->right = new Node(6);

    root->right->right = new Node(8);

    int key = 5;
    if(searchInBST(root, key)) cout<<"Key found";
    else cout<<"Key Not Found";

    inOrder(root);
    cout<<endl;
    root = deleteInBST(root,5);
    inOrder(root);
    return 0;

    return 0;
 }