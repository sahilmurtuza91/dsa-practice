#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Entre the number to print the number upto that number: ";
    cin>>x;
    int a=1;
    while(x>0){
        cout<<a<<endl;
        a++;
        x--;
    }
    return 0;
}