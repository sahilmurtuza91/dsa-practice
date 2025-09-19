#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are Eligible to Vote";
    }
    else{
        cout<<"YOu are Not Eligible tp Vote";
    }
    return 0;
}