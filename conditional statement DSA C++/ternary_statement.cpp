#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to check wheather the given number is positive or negative: ";
    cin>>num;
    cout<<(num>=0?"The given nujmver is positive":"The given number is negative");
}