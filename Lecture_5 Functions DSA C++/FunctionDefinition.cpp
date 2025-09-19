#include<iostream>
using namespace std;

//Function Definition
void printhello(){
    cout<<"\nHello World\n";
}
int returnSomevalue(){
    cout<<"\nHere we are going to return something and during its call it will store it sone other values and then it will print or directly it will print by using cout\n";
    return 3;
}
int main(){
 // function call
 printhello();
 // function call 
 int x=returnSomevalue();   // this will print the cout things which is present in the function and its return value (3) will store in varialble "x"
 cout<<x;  // this will print the return value of returnSomeValue function.

 // And if we want to print the return value and cout values withous stored in any variable then we will use directly cout<<"function name"

 cout<<returnSomevalue();
 return 0;
}