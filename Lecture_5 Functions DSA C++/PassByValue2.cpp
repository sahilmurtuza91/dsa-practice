#include<iostream>
using namespace std;
int sum(int a, int b){
    a=a+10;
    b=b+10;
    cout<<"This will print from the sum function: \n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return a+b;
}
int main(){
    cout<<"Entre the two number to perform the addition:\n";
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<"This will print from the main Function:\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<endl;
    cout<<"----:This will Known as Pass by Value in this the original value will not change after changing the function value:---- \n";
    cout<<endl;
    return 0;
}