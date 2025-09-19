#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Printing the priyamid\n";
    cout<<"Entre the size: ";
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1;j<=a-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=i-1; j>=1; j--){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}