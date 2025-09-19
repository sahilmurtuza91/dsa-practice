#include<iostream>
using namespace std;
class number{
    public:
    static int num;     // You can’t directly initialize a static data member inside the class definition
    number(){
        num++;
    }
    void getNumVakue(){
        cout<<"Num:--->  "<<num<<endl;
    }
};
int number::num=0;  // definition outside the class
int main(){
    number n1;
    n1.getNumVakue();

    number n2;
    n2.getNumVakue();

    number n3,n4,n5;
    n3.getNumVakue();
    n4.getNumVakue();
    n5.getNumVakue();
    return 0;
}