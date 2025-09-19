#include<iostream>
using namespace std;
int MinimumNumber(int a, int b, int c){
    if(a>b && a>c){
        cout<<"The Greates Number is "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"The Greates Number is "<<b<<endl;
    }
    else if(c>a && c>b){
        cout<<"The Greatest Number is "<<c<<endl;
    }
    else if(a>b && a==c){
         cout<<"The Greates Number is "<<a<<endl;
    }
    else if(b>a && b==c){
         cout<<"The Greates Number is "<<b<<endl;
    }
    else if(c>a && c==b){
        cout<<"The Greatest Number is "<<c<<endl;
    }
    else if(a>c && a==b){
        cout<<"The Greates Number is "<<a<<endl;
    }
    else{
        cout<<"All the number are same "<<a<<endl;
    }
}
int main(){
    int a,b,c;
cout<<"Enter the three Number: "<<endl;
cin>>a>>b>>c;
MinimumNumber(a,b,c);
    return 0;
}