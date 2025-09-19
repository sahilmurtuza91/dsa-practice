#include<iostream>
using namespace std;
class teacher{
    public:
    string name;
    teacher(){
        cout<<"Non-paramaterizedConstructor\n";
    }
    teacher(string name){
        this->name=name;
        cout<<"paramaterizedConstructor\n";
    }
};
int main(){
    teacher t1;
    teacher t2("sahil");
}