#include<iostream>
using namespace std;
int main(){
    int n=4;
    bool ibprime=true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            ibprime=false;
            break;
        }
    }
    if(!ibprime){
        cout<<"Not prime number";
    }
    else{
        cout<<"pRIME NUMBER";
    }
    
    return 0;
}