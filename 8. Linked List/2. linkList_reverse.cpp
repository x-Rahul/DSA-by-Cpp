#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;;

    //constructor
    node(int value){
        data = value;
        next = NULL;
    }
};

void insert_at_tail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
// Method 1:
node* revList_itr(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
// Method 2:

node* revList_rec(node* &head){
    
    if (head == NULL || head->next == NULL){
        return head;
    }
    node* newhead= revList_rec(head->next);
    head->next->next = head;
    head->next =NULL;

    return newhead;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int
main()
{
    node* head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    display(head);

    node* newhead = revList_itr(head);
    display(newhead);

    node* newhd = revList_rec(newhead);
    display(newhd);
    return 0;
}