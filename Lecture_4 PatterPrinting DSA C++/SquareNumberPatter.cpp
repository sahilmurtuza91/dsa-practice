#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Entre the size of the SquareNumberPatterPrinting\n";
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}