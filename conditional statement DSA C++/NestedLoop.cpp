#include<iostream>
using namespace std;
int main(){
    cout<<"Now we are going to use the nested loop to print some common type of pattern\n";
    int a;
    cout<<"Entre the length to print the pattern: ";
    cin>>a;
    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cout<<"*";
            
        }
        cout<<"\n";
        
    }
    return 0;
}