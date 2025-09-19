#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Now we are going to print the hollow diamond.\n";
    cout<<"Enter the size of the hollow Diamond: ";
    cin>>a;
    for(int i=0; i<a; i++){
        for(int j=1;j<=a-i-1; j++){
            cout<<"  ";
        }
        cout<<"*";
       if(i!=0){
            for(int j=0; j<2*i-1; j++){
                cout<<"  ";
            }
            cout<<"*";
       }
        cout<<endl;
    }
    for(int i=1; i<a; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        cout<<"*";
        if(i!=(a-1)){
            for(int j=0; j<((2*(a-1-i))-1); j++){
                cout<<"  ";
                
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}