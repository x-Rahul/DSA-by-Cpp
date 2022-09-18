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

void Insert_at_tail (node *&head, int value){
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

int lengthList(node *head){
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {   
        temp = temp->next;
        len++;
    }
    return len;
}
void intersect(node *&head1, node*&head2, int pos){
    node *temp1 = head1, *temp2 = head2;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    
    
}
int intersection (node* &head1, node *head2){
    int l1 = lengthList(head1), l2 = lengthList(head2);
    int diff = 0;
    node *ptr1, *ptr2;

    // ptr1 - pointing longer List 
    if(l1<l2){
        diff = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        diff = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (diff)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL){
            return -1;
        }
        diff--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {   
        if (ptr1 == ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

    }
    return -1;
    
}

void Display(node *head){
    while (head != NULL)
    {   
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node *head1 = NULL, *head2 = NULL;
    Insert_at_tail(head1, 1);
    Insert_at_tail(head1, 2);
    Insert_at_tail(head1, 3);
    Insert_at_tail(head1, 4);
    Insert_at_tail(head1, 5);
    Insert_at_tail(head1, 6);
    Insert_at_tail(head2, 9);
    Insert_at_tail(head2, 10);

    intersect(head1, head2, 3);
    Display(head1);
    Display(head2);
    cout<< intersection(head1, head2);
    return 0;
}