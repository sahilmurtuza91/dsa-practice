#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // int *ptr=&a;  // this will store the address of variable 'a' in another variable ptr using *
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl; // this will print the addres of that it will stored the another variable address.
    // cout<<&ptr<<endl;

    // // here we storing the addres of one pointer to another pointer
    // int **ptr2=&ptr;

    // cout<<"Addres of pointer: "<<ptr2<<endl;

    // cout<<"Address of one pointer that will stored the addres of another pointer variable: "<<&ptr2<<endl;

    // // another datatype

    // float b=125.5f;
    // float *fptr=&b;
    // cout<<"Address of float type variable: "<<fptr<<endl;


    // // uses of Dereferencing Operator --> it gives the value at address.

    // cout<<"Value using Dereferencing Operator: "<<*(&b)<<endl;
    // cout<<"Value using Dereferencing Operator: "<<*(fptr)<<endl;

    // // here we finding the value usinge the Dereferencing Operator that variable which store the address of another pointer variable

    // cout<<"Value of 'a' taken from the pointer to pinter: "<<**(ptr2)<<endl;
    // cout<<"Value of 'a' taken from the singke pointer is :"<<*(ptr)<<endl;
    // cout<<"Value of 'a' taken from ther (&a) is: "<<*(&a)<<endl;

    // //NULL pointer

    // int *ptr3;   //// this will store the garbage value so we need to assign the null value to prevent from it.
    // cout<<ptr3<<endl;  
    
    int *ptr4=NULL;
    cout<<ptr4<<endl;

    // Null pointer not perform Dereferencing
    cout<<*(ptr4)<<endl;  //// this will gives an error

    return 0;
}