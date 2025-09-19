// This is the compile Time polymorphism(finction Overriding) because of not use of virtual function.
#include<iostream>
using namespace std;
class teacher{
    public:
    void getinfo(){
        cout<<"THis is the parent class teacher"<<endl;
    }
};
class teacher2:public teacher{
    public:
    void getinfo(){
        cout<<"This is the bease class teacher2"<<endl;
    }
};
int main(){
    teacher2 t1;
    t1.getinfo();
    teacher t2;
    t2.getinfo();
    return 0;
}