#include "bits/stdc++.h"
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

vector<int> leftView(Node* root) 
{
    queue<Node*>Q;
    vector<int> result;
    if(root) Q.push(root);
    while(!Q.empty())
    {
        int n = Q.size();
        for(int i=0;i<n;i++){
            Node* front = Q.front();
            Q.pop();
            if(i==0) result.push_back(front->data);
            if(front->left) Q.push(front->left);
            if(front->right) Q.push(front->right);
        }
    }
    return result;
}

int main(){
    
    // Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);

    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);

    Node *root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);

    root->left->left = new Node(2);
    root->left->right = new Node(4);


    for(auto i: leftView(root)) cout<<i<< " ";

    return 0;
}