#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Binary Number to find its Decimal number"<<endl;
    cin>>n;
    int x=1;
    int p=n;
    int digit=0;
    while(n>0){
        int r=n%10;
        digit=digit + r*x;
        n=n/10;
        x=x*2;
    }
    cout<<"The Decimal degit of the binart number "<<p<<" is "<<digit;
    return 0;

}
