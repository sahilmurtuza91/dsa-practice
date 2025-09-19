#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Entre the size of the SquareNumberPatterPrinting\n";
    cin>>a;
    for(int i=1; i<=a; i++){
        char ch='A';
        for(int j=1; j<=a; j++){
            cout<<ch<<" ";
            ch=ch+1;  // by adding the integer itno charactre first character converted into integer by using its ASCII value and then add the integer and then agin it will converted to the character --->> 65+1=66 and then 66 is equal to 'B'
        }
        cout<<endl;

    }

    cout<<"Another form to print the pattern.\n";
    char cha='A';
    for(int i=0; i<a; i++){
        
        for(int j=0; j<a; j++){
            cout<<cha<<" ";
        }
        cha=cha+1;
        cout<<endl;
    }
    return 0;
}