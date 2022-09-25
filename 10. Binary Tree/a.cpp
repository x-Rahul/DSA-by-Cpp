#include "iostream"
#include "vector"
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = NULL; right =NULL;
    }
};