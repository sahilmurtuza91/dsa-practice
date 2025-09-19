#include<iostream>
using namespace std;
int x=10; // this is global variable and its Scope is all over the program
void pri(){
    cout<<x<<endl;
}
int main(){
    cout<<"Here we are going to perform the scope of variable"<<endl;
    for(int i=0; i<3; i++){
        cout<<"This is local variable and its scope is only in this for loop"<<endl;
    }
    pri();
    cout<<x<<endl;
}