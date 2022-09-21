#include <iostream>
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

class queue{
    node *front;
    node *back;

public:
    // contructor
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node *n = new node(x);

        if(front == NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop(){
        if (front == NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }

        node* to_del = front;
        front = front->next;
        delete to_del;
    }

    int peek(){
        if(front == NULL){
            cout<<"No Element in the Queue";
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }

};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;
}