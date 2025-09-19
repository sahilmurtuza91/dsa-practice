#include<iostream>
using namespace std;
void someTask(){
    int a,b;
    cout<<"Entre the two number to just check the return Statement\n";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater\n";
    }
    else if(b>a){
        cout<<b<<" is greater\n";
        return;  // This will also remove from this whole loop aftre this condition meet
    }
    else{
        cout<<"Both the number is same\n";
    }
    cout<<"Thanks for you Convinence\n";
}
void hello(){
    cout<<"Hello Devloper! \n";
    someTask();
    return;
    cout<<"How are you? \n";  // this will not work becaue aftre the return statement the stack frame is deleted and after the return statement it will not perform any task.
}
int sum(int a, int b){
    hello();
    cout<<"Sum of the "<<a<<" and "<< b<<" is: ";
    return a+b;
}
int main(){
    int x,y;
    cout<<"Entre the two number to sum it\n";
    cin>>x>>y;
    cout<<sum(x,y)<<endl;
    return 0;
}