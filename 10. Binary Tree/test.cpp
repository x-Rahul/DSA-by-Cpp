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

class Solution {
public:
    vector<int> rightSideView(Node* root) {
        queue<Node*>q;
        vector<int> result;
        if(root) q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                Node* front = q.front();
                q.pop();
                if(i==(size-1)) result.push_back(front->data);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }
        return result;
    }
};