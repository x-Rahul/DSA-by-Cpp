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

void Display(node *head){
    while (head != NULL)
    {   
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node *head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        Insert_at_tail(head, arr[i]);
    }
    Display(head);

    return 0;
}