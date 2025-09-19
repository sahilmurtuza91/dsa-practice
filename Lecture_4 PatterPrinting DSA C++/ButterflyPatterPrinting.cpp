#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Here we are going to print the Butterfly Patter:\n";
    cout<<"Entre the size of the pattern: ";
    cin>>a;
    for(int i=0; i<a; i++){
        for(int j=0; j<=i; j++){
            cout<<"*"<<" ";
        }
        if(i!=(a-1)){
            for(int j=0; j<2*(a-1-i)-1; j++){
                cout<<"  ";
            }
            for(int j=0; j<=i; j++){
            cout<<"*"<<" ";
        }
       
        }
         if(i==(a-1)){
            for(int j=0; j<i; j++){
            cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
        for(int i=1; i<a; i++){
            for(int j=a-i; j>0; j--){
                cout<<"*"<<" ";
            }
            for(int j=0; j<2*i-1; j++){
                cout<<"  ";
            }
            for(int j=0; j<a-i; j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    return 0;
}