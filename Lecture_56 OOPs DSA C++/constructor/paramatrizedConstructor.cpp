#include<iostream>
using namespace std;
class teacher{
    public:
    string name;
    int age;
    teacher(string name,int age){
        this->name=name;
        this->age=age;
    }
    void valueTeacher(){
        cout<<"Name of the teacher is: "<<name<<endl;
        cout<<"Age of the teacher is: "<<age<<endl;
    }
};
int main(){
    teacher t1("sahil",20);
    t1.valueTeacher();
    return 0;
}