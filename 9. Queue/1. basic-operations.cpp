#include<iostream>
using namespace std;

#define n 20
class queue {
    int *arr;
    int front;
    int back;

public:
    // constructor
    queue(){

        arr = new int[n];
        front = -1;
        back = -1;
    }


    void enqueue(int x){

        if(back == n-1){
            cout<<"Queue Overflow"<< endl;
            return;
        }
        
        back++;
        if(front == -1)
            front++;

        arr[back] = x;
    }

    void dequeue(){

        if(front == -1 || front>back){
            cout<<"No element to dequeue"<<endl;
            return;
        }
        front++;
    }

    int peek(){

        if(front == -1 || front>back){
            cout<<"No element in queue";
            return -1;
        }
        return arr[front];
    }

    bool empty(){

        if(front == -1 || front>back){
            return true;
        }
        return false;
    }
};


int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout<< q.peek()<<endl;
    q.dequeue();
    cout<< q.peek()<<endl;
    q.dequeue();
    cout<< q.peek()<<endl;
    q.dequeue();
    cout<< q.peek()<<endl;
    q.dequeue();

    cout<<q.empty()<<endl;
    return 0;
}