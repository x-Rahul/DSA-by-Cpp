#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int top_element){
    
    if (st.empty()){
        st.push(top_element);
        return;
    }
    
    int element = st.top();
    st.pop();
    insertAtBottom(st, top_element);
    st.push(element);

}

void reverseStack(stack<int> &st){

    if(st.empty()){
        return;
    }
    int top_element  = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, top_element);
}

int main(){

    stack<int> st;
    st.push(1), st.push(2), st.push(3), st.push(4);

    reverseStack(st);

    while (!st.empty())
    {
        cout<<st.top()<< endl;
        st.pop();
    }cout<<endl;
    
    return 0;
}