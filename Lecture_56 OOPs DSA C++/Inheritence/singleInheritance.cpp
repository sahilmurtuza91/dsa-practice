#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name,int age){
        this->name=name;
        this->age=age;
        cout<<"Constructor of parent class"<<endl;
    }

};
class student:public person{
    public:
    int roll;
    void getDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no.:"<<roll<<endl;
    }
    student(string name,int age,int roll):person( name,age){
        cout<<"constructor of child class"<<endl;
        this->roll=roll;
    }

};
int main(){
    student s("sahil",20,23);
    s.getDetails();

}