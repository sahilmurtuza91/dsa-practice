#include<iostream>
using namespace std;
int main(){
    cout<<"Question 1   add the number from 1 to n which is divisuble by 3\n";
    int a;
    int sum=0;
    cout<<"Entre the number upto you want to add: ";
    cin>>a;
    for(int i=1; i<=a;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    cout<<"The sum of the number upto "<<a<<" is "<<sum;
}