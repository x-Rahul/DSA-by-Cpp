#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *previous;

    //constructor
    node(int value){
        data = value;
        next = NULL;
        previous = NULL;
    }
};

void insert_at_head(node *&head, int value){


    node *n = new node(value);
    n->next = head;
    if(head != NULL){
        head->previous =n;
    }
    head = n;
}

void insert_at_tail(node *&head, int value){
    node *n = new node (value);
    if(head == NULL){
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->previous =  temp;
}

void delete_at_head(node *&head){
    node *to_delete = head;
    head = head->next;
    head->previous = NULL;

    delete to_delete;
}
void Deletion(node *head, int pos){
    if (pos == 1){
        delete_at_head(head);
        return;
    }

    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->previous->next = temp->next;
    if (temp->next != NULL){
        temp->next->previous =  temp->previous;
    }

    delete temp;
}

void Display(node *head)
{   
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){

    node *head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    Display(head);
    // insert_at_head(head, 6);
    // insert_at_head(head, 7);
    // Display(head);

    Deletion(head, 1);
    Display(head);
    return 0;
}