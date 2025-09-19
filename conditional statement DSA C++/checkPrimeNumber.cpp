#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Entre a number to check wheather a number is prime number or not: ";
cin>>a;
int count=0;
for(int i=1; i<=a; i++){
    if(a%i==0){
        count++;
    }
}
if(count==2){
    cout<<"The given number is prime number";
}
else{
    cout<<"The given number is not prime number";

}
return 0;
}