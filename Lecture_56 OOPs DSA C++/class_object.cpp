#include<iostream>
using namespace std;
class teacher{
    private:
    string name;
    string branch;
    double salary;
    public:
    void setValue(string name,string branch,double salary){
        this->name=name;
        this->branch=branch;
        this->salary=salary;
    }
    void getValue(){
        cout<<"Name: "<<name<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
int main(){
    teacher t1;
    t1.setValue("sahil murtuza","computer science",45000);
    t1.getValue();
    return 0;
}