// Inster at tail, Insert at Head, search, delete

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // Constructor
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insert_at_head(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insert_at_tail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
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
void delete_at_head(node *&head)
{
    node *to_delete = head;
    head = head->next;

    delete to_delete;
}
void delete_node(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete_at_head(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *to_delete = temp->next;
    temp->next = temp->next->next;

    delete to_delete;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    cout << endl;
    return false;
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

int main()
{
    node *head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    display(head);

    insert_at_head(head, 0);
    display(head);

    cout << "bool " << search(head, 2) << endl;

    delete_node(head, 3);
    display(head);
    delete_at_head(head);
    display(head);

    return 0;
}
