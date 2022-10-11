/*

Output : 1 3 6 7 Right View

*/



#include "bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = NULL, right = NULL;
    }
};

void view(Node *root){
    if(root == NULL) return;

    queue<Node*> Q;
    Q.push(root);

    vector<int> v;
    while (!Q.empty())
    {   
        int size = Q.size();
        while (size--)
        {
            Node *currRoot = Q.front(); Q.pop();
            v.push_back(currRoot->data);
            if(currRoot->left) Q.push(currRoot->left);
            if(currRoot->right) Q.push(currRoot->right);
        }
        cout<<v.back()<< " "; // Right View
        // cout<<v.front()<< " "; // Left View
    }
}

int32_t main(){
 Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);

    // Level Order Traversal - Right View - Left View
    view(root);
    return 0;
}