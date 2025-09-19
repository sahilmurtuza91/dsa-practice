#include<iostream>
using namespace std;
class teacher{
    public:
    string name;
    int age;
    string branch;
    string city;
    void getinfo(){
        cout<<"This is the basic fuction\n";
    }
    void getinfo(string name){
        this->name=name;
        cout<<"Name of the faculty is: "<<name<<endl;
    }
    void getinfo(string name, int age, string branch){
        this->name=name;
        this->age=age;
        this->branch=branch;
        cout<<"Name of the faculty is: "<<name<<endl;
        cout<<"Age of the faculty is: "<<age<<endl;
        cout<<"Branch of the faculty is: "<<branch<<endl;
    }
    void getinfo(string name, string branch,int age){
        this->name=name;
        this->age=age;
        this->branch=branch;
        cout<<"Name of the faculty is: "<<name<<endl;
        cout<<"Age of the faculty is: "<<age<<endl;
        cout<<"Branch of the faculty is: "<<branch<<endl;
    }
};
int main(){
    teacher t1;
    // t1.name="sahil Murtuza";
    // t1.age=20;
    // t1.branch="ComputerScience";
    t1.getinfo();
    t1.getinfo("sahil Murtuza");
}