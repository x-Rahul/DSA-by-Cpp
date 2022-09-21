#include "bits/stdc++.h"
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue Empty \n";
            return -1;
        }
        if(s2.empty()){
            while (!s1.empty())
            {   
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topValue = s2.top();
        s2.pop();
        return topValue;
    }

    // int peek(){}
    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        return false;
    }
};


int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.pop()<<endl;  
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    q.push(4);
    cout<<q.pop()<<endl;

    cout<<q.empty()<<endl;
    return 0;
}