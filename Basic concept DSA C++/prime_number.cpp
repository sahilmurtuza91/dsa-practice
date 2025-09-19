#include<iostream>
using namespace std;
int main(){
    int a;
    int count=0;
    cout<<"Enter the number to check whaeather the given number is prime or not: ";
    cin>>a;
    for(int i=1; i<=a; i++){
        if(a%i==0){
            count=count+1;
        }
    }
    if(count==2){
        cout<<"The given number is prime number "<<a;
    }
    else{
        cout<<"The given number is not prime number "<<a;
    }
}