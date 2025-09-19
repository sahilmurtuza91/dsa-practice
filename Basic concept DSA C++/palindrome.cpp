#include<iostream>
using namespace std;
int main(){
    int a,num=0;
    cout<<"Enter the number to check wheather the given number id palindrome or not: ";
    cin>>a;
    int original=a;
    while(a>0){
        int b=a;
        num=(num*10)+(b%10);
        a=a/10;
    }
    
    if(original==num){
        cout<<"The given number is palindrome "<<original;
    }
    else{
        cout<<"The given number is not palindrome "<<original;
    }
}