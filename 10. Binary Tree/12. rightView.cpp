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

void rightView(Node *root){
    if(root == NULL) return;

    queue<Node*> Q;
    Q.push(root);

    while (!Q.empty())
    {   
        int n = Q.size();
        for(int i = 0; i<n; i++){
            Node *front = Q.front(); 
            Q.pop();
            if(i == n-1) cout<< front->data<<" ";
            if(front->left) Q.push(front->left);
            if(front->right) Q.push(front->right);
        }
    }
}
// method 2 : by pushing ans to vector
vector<int> rightSideView(Node* root) {
    queue<Node*>Q;
    vector<int> result;
    if(root) Q.push(root);
    while(!Q.empty())
    {
        int size = Q.size();
        for(int i=0;i<size;i++){
            Node* front = Q.front();
            Q.pop();
            if(i==(size-1)) result.push_back(front->data);
            if(front->left) Q.push(front->left);
            if(front->right) Q.push(front->right);
        }
    }
    return result;
}

int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    rightView(root);
    cout<<endl;

    for(auto i: rightSideView(root)) cout<<i<< " ";

    return 0;
}