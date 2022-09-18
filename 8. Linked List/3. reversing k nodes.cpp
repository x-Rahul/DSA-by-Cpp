#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;

    //constructor 
    node (int value){
        data  = value;
        next = NULL;
    }
};

void insert_at_tail(node *&head, int val){
    node *n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    
}

node* reverseK(node *&head, int k){
    node *prevptr = NULL, *currptr = head, *nextptr;
    // node *currptr = head;
    // node *nextptr;

    int count = 0;
    while (currptr != NULL && count <k)
    {
        nextptr = currptr->next;

        currptr->next = prevptr;
        prevptr = currptr;
        currptr  = nextptr;
        count++;
    }
    if(nextptr != NULL){
        head->next = reverseK(nextptr, k);
    }
    return prevptr;
}

void Display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    node *head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    Display(head);

    int k = 2;
    node *newhead = reverseK(head, k);
    Display(newhead);

    return 0;
}