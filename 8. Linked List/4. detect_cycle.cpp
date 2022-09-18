#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    //contructor
    node(int value){
        data = value;
        next = NULL;
    }
};

void insert_at_tail(node *&head, int value){
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

void makeCycle(node *&head, int k){
    node *temp = head;
    node *startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if(count == k){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool detectCycle(node *&head){
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast){
            return true;
        }  
    }
    return false;
    
}

void removeCycle(node *&head){
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    
    fast = head;
    while (slow->next != fast->next )
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

void Display (node *head){
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
    insert_at_tail(head, 8);
    insert_at_tail(head, 9);
    makeCycle(head, 3);
    // Display(head);
    cout<< detectCycle(head) << endl;
    removeCycle(head);
    cout<< detectCycle(head) << endl;
    Display(head);
    
}