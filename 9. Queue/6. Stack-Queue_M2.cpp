#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
public:
    Stack(){
        N=0;
    }

    void push(int x){
        q1.push(x);
        N++;
    }

    void pop(){
        if(q1.empty()){
            cout<<"Empty";
            return;
        }
        // for (int i = 0; i <= N-1; i++)
        // {
        //     q2.push(q1.front());
        // }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int top(){
        if(q1.empty()){
            cout<<"No element";
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }

    int Size(){
        return N;
    }
};


int main(){
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.Size()<<endl;

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.Size()<<endl;
    st.pop();
    return 0;

}