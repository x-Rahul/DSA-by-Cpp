#include<bits/stdc++.h>
using namespace std;

class Mechanical{
    
    public:
    string name;
    int age;
    bool gender;

    // constructor:
    Mechanical(){}
    Mechanical(string n, int a, bool g){
        name = n;
        age = a;
        gender = g;
    }

    // Copy constructor(Deep Copy): 
            // if not make then default copy constructor will be used automatiically(Shallow Copy)

    // Mechanical (Mechanical &a){
    //     name = a.name;
    //     age = a.age;
    //     gender = a.gender;
    // }
    

    // Print on screen:
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
        cin>>student[i].name;
        cin>>student[i].age;
        cin>>student[i].gender;
    }
    for (int i = 0; i < 2; i++)
    {
        student[i].Display();
    }

    Mechanical Prof("Sandeep", 45, 1);
    Prof.Display();
    Mechanical other = Prof; // Deep copy because of copy constructor we created
    cout<<endl;
    other.Display();
    return 0;
}