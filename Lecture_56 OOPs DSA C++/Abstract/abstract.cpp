#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;
};
class circle:public Shape{
    public:
    void draw() override{
        cout<<"The shape of circle is drwan\n";
    }
};
class rectangle:public Shape{
    public:
    void draw()override{
        cout<<"The shape of the rctangle is Drawn\n";
    }
};
int main(){
    Shape *objptr;
    circle c;
    rectangle r;

    objptr=&c;
    objptr->draw();    // Call the circle class Draw Function

    objptr=&r;
    objptr->draw();     // Call the Rectancle class Draw Function

//  objptr->Shape::draw();  ----> This is not possible.
}