#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to find its Binary NUmber: ";
    cin>>n;
    int p=n;
    int x=1;
    int binary =0;
    while(n>0){
        int r=n%2;
        binary=binary + r*x;
        n=n/2;
        x=x*10;
    }
    cout<<"The Binary digit of the number "<<p<<" is "<<binary;
    return 0;
}
