#include<iostream>
using namespace std;
int reversenumber(int n){
    int reverse=0;
    while(n>0){
        reverse=(reverse*10)+(n%10);
        n=n/10;
    }
    return reverse;
}
int main(){
    int n=12345;
    cout<<reversenumber(n)<<endl;
}