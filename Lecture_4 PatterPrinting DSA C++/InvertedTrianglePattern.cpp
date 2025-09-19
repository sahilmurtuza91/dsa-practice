#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Now we are going to print the inverted trinagle\n";
    cout<<"Enter the size of the inverted triangle: ";
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=a+1-i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }

    cout<<"Its character version is \n";
        char ch='A';
        for(int i=1; i<=a; i++){
        
        for(int j=1; j<i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=a+1-i; j++){
            cout<<ch<<" ";
            
        }
        cout<<endl;
        ch=ch+1;
        
        
    }
    return 0;
}

