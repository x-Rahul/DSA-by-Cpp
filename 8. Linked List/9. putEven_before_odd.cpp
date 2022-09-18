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

void insert_at_tail (node *&head, int value){
    node *n = new node(value);
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
}

void even_after_odd(node *&head){
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {   
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        if (odd->next != NULL){
            even = even->next;
        }
    }
    odd->next = evenStart;

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
    insert_at_tail(head, 7);
    Display(head);
    even_after_odd(head);
    Display(head);
    return 0;
}