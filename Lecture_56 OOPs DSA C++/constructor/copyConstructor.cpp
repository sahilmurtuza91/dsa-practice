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
    teacher(teacher &obj){
        this->name=obj.name;
        this->age=obj.age;
    }
};
int main(){
    teacher t1("Sahil",21);
    teacher t2(t1);
    cout<<t1.name<<endl;
    cout<<t1.age<<endl;
    cout<<endl;
    t2.name="khaild";
    cout<<t2.name<<endl;
    cout<<t2.age<<endl;
    return 0;
}