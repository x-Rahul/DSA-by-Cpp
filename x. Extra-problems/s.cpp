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

int klevelSum(Node *root, int k){
    if(root == NULL) return 0;
    queue<Node*> Q;
    Q.push(root);

    int sum = 0, level = 0, flag = 0;
    while (!Q.empty())
    {  
        int size = Q.size();
        while(size--){
            Node *front = Q.front();Q.pop();
            if(front->left) Q.push(front->left);
            if(front->right) Q.push(front->right);   
            if(level == k) {
                sum += front->data;
                flag =1;
            }        
        }
        cout<<endl;
        level++; 
        if(flag == 1) break;
    }
    return sum;
}

int32_t main(){
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
    int k = 3;
    cout<<endl;
    cout<<klevelSum(root, k);
    return 0;
}