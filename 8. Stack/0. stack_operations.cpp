#include <iostream>
using namespace std;
#define n 100

class stack{
    int *arr;
    int top;

public:
    stack(){
        arr = new int[n]; // Dynamic Allocation of memory
        top = -1;
    }

    void Push(int x){
        if(top == n-1){
            cout<< "Stack Overflow ";
            return;
        }

        top++;
        arr[top] = x;
    }

    void Pop(){
        if(top == -1){
            cout<<"No Element to pop ";
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"No Element in stack ";
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};

int main(){

    stack st;
    st.Push(1), st.Push(2), st.Push(3);
    cout<<st.Top()<<endl;
    st.Pop();
    cout<<st.Top()<<endl;
    st.Pop();
    st.Pop();
    st.Pop();
    cout<<st.Top();
    return 0;
}