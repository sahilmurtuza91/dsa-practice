#include<iostream>
using namespace std;
int sumNumber(int x){
    int sum=0;
    int n=x;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int a;
    cout<<"Entre the number upto which you want to sum the number: ";
    cin>>a;
    cout<<sumNumber(a);
    return 0;
}