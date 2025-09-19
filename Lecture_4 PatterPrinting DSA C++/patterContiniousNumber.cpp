#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Here we are goin to print the pattern in continious manner but in the from of rectangle or square\n";
    cout<<"Enter the size: ";
    cin>>a;
    int x=1;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cout<<x<<" ";
            x=x+1;
        }
        cout<<endl;
    }
    
    cout<<"Now we are printing the same but in Alphabate form.\n";
    char ch ='A';
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}