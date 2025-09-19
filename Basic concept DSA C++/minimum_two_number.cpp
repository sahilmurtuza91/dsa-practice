#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two number to find the minimum number form it";
    cin>>a;
    cin>>b;
    if(a<b){
        cout<<"Second number is greater then the first number "<<b;
    }
    else if(a>b){
        cout<<"The first number is greater then the second number"<<a;
    }
    else{
        cout<<"Both the number is same ";
    }
}