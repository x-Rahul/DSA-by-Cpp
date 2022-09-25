#include "bits/stdc++.h"
#include "vector"
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = NULL,right =NULL;
    }
};

bool getPath(Node *root, int key, vector<int> &path){

    if(root == NULL) return false;

    path.push_back(root->data);
    if(root->data == key) return true;
    if( getPath(root->left, key, path) || getPath(root->right, key, path) ) return true;

    path.pop_back(); // This means if key exist then it is not a part of current path or does not exit
    return false;
}
 
int LCA(Node *root, int n1, int n2){
    vector<int> path1, path2;

    if(!getPath(root, n1, path1)  || !getPath(root, n2, path2)) return -1;
    
    int div;
    for(int div = 0; div < path1.size() && path2.size(); div++ ){
        if(path1[div] != path2[div]) break;
    }
    return path1[div-1];
}

Node *LCA2(Node *root, int n1, int n2){

    if(root == NULL) return NULL;

    if(root->data == n1 or root->data == n2) return root;
    Node *leftLCA = LCA2(root->left, n1, n2);
    Node *rightLCA = LCA2(root->right, n1, n2);

    if(leftLCA and rightLCA) return root;
    if(leftLCA) return leftLCA;
    return rightLCA;
}


int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int n1 = 7, n2 = 6;
    cout<<"Output: "<< LCA2(root, n1, n2)->data;
    // cout<<"Output: "<< LCA(root, n1, n2);  # Error
    return 0;

}