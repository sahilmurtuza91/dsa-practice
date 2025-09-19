#include<iostream>
using namespace std;
int main(){
    char str[]={'a','b','c'};
    cout<<str<<endl;
    char str1[]={'a','b','c','\0'};
    cout<<str1<<endl;

    char str2[]="sahil";
    cout<<str2<<endl;

    // char str3[100];
    // cin>>str3;
    // cout<<"The input given by the user is "<<endl;
    // cout<<str3<<endl;   //--->This will ignore the word after a space

    cout<<"Enter another input"<<endl;
    char str4[100];
    cin.getline(str4,20);
    
    cout<<"Enter another input"<<endl;
    char str5[100];
    cin.getline(str5,20,'$');
    return 0;

}
