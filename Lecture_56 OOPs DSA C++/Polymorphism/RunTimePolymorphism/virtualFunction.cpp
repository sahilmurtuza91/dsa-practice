// This function overriding is the RunTime Polymorphis becaue of this virtual function.

#include<iostream>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"This is the Base Class\n";
    }
    void infoBase(){
        cout<<"This is the only function of the Base class\n";
    }
};
class Drived:public Base{
    public:
    void display()override{
        cout<<"This is the Derived class of the polymorphism\n";
    }
    void infoDerived(){
        cout<<"This is the info functio of the Derived class\n";
    }
};
int main(){
    Base *objptr;
    Drived obj;
    objptr=&obj;
    objptr->display();           // ✅ Derived class display (runtime polymorphism)
    objptr->Base::display();     // ✅ Force call Base class version

    objptr->infoBase();          // This is also possible
//  objptr->infoDerived();-----> this is not possible

    // to call the Derived class function which is not override then we have to use the drived class object.
    obj.infoDerived();
    return 0;
}