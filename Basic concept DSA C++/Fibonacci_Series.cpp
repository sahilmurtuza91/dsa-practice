#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,next;
    int num;
    cout<<"Enter the number to print the fabonacci series upto that number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
}