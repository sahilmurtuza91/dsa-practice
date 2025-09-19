#include<iostream>
using namespace std;

void changeA(int &b){  // pass by references by usinge Alias (&-->Considered as alias not address.)
    // Inside the function, 'b' and 'a' refer to the same memory.
    // So, modifying 'b' also changes a.
    b=20;
}
int main(){
    int a=10;
    changeA(a);
    cout<<"Value of 'a': "<<a<<endl;  //// here the value will Change.
    return 0;
}