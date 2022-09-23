# Binary trees
## Properties of Binary Trees
1. Maximum nodes at level L = 2<sup>L</sup> .
2. Maximum nodes in a tree of a tree of height H = 2<sup>H</sup>- 1
3. For N nodes, minimum possible height or minimum number of levels are log<sub>2</sub>(N+1)
4. A binary tree with L leaves has at least [ log<sub>2</sub>(N+1)+1 ] number of levels.


Binary Tree Formation
```c++
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
```

```c++
int main(){
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return 0;
}
```
Traversals in Binary tree
1. Preorder Traversal
```c++
void preOrder(struct Node *root){
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
```
2. Inorder Traversal
```c++
void inOrder(struct Node *root){
    if(root == NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
```

3. Postorder Traversal
```c++
void postOrder(struct Node *root){
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
```
## Keyterms
Height: Distance between root node and deepest node of tree.<br>
Diameter: Number of nodes in the longest path between any 2 leaves.