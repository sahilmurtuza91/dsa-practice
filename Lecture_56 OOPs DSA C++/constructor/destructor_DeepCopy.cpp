#include <iostream>
using namespace std;
class teacher
{
public:
    string name;
    int *age;
    teacher(string name, int age)
    {
        this->name = name;
        this->age = new int;    // Allocate new memory
        *(this->age) = age;
    }
    teacher(teacher &obj)
    {
        this->name = obj.name;
        this->age=new int;      // Allocate new memory
        *(this->age) =*( obj.age);      // Copy the value, not the pointer
    }
    ~teacher(){
        delete age;
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    teacher t1("sahil", 20);
    teacher t2(t1);
    cout << "calling the first constructr" << endl;
    cout << t1.name << endl;
    cout << *(t1.age) << endl;
    cout << endl;

    cout << "calling the second constructor" << endl;
    cout << t2.name << endl;
    cout << *(t2.age) << endl;
    cout << endl;
    // changing the value of constuctor 2
    cout << "Change the age of copy constructor" << endl;
    *(t2.age) = 45;
    cout << "first constuctor ofter chnaging the value of copy constructor" << endl;
    cout << t1.name << endl;
    cout << *(t1.age) << endl;
    cout << endl;

    cout << "second constuctor ofter chnaging the value of copy constructor" << endl;
    cout << t2.name << endl;
    cout << *(t2.age) << endl;
    return 0;
}