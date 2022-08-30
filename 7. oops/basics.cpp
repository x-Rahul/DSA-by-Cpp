#include<bits/stdc++.h>
using namespace std;

class Mechanical{
    
    public:
    string name;
    int age;
    bool gender;

    // void setName(string nme){
    //     name = nme;
    // } //to access private data

    void Display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};

int main(){

    cout<< "Enter name -> age -> gender : "<<endl;

    Mechanical student[2];
    for (int i = 0; i < 2; i++)
    {   
        // string s; cin>>s;
        // student[i].setName(s);// for private data
        cin>>student[i].name;
        cin>>student[i].age;
        cin>>student[i].gender;
    }
    for (int i = 0; i < 2; i++)
    {
        student[i].Display();
    }
    
    return 0;
}