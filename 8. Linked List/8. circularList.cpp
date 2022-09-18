#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node *next;

    //constructor
    node(int value){
        data = value;
        next = NULL;
    }
};

void insert_at_head(node *&head, int value){
    node *n = new node(value);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n; 
}

void circularList(node *&head, int value){
    node *n = new node(value);
    if(head == NULL){
        insert_at_head(head, value);
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void Display(node *head){
    node *temp = head;
    do {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while (temp != head);
    cout<<endl;
}
int main(){
    node *head;
    circularList(head, 1);
    circularList(head, 2);
    circularList(head, 3);
    circularList(head, 4);
    Display(head);
    insert_at_head(head, 5);
    Display(head);
    return 0;
}