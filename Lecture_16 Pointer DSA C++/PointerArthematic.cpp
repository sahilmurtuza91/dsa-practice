#include<iostream>
using namespace std;
int main(){
    int arr[]={20,45,67,34,56};
    cout<<arr<<endl; // this gives ths address of first index

    cout<<*arr<<endl;
  
    cout<<*(arr+1)<<endl;
    cout<<*(arr+3)<<endl;

    int *ptr;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<ptr++<<endl;
    cout<<ptr-1<<endl;
    cout<<--ptr<<endl;

    int *ptr1;
    int *ptr2=ptr1+2;
    cout<<ptr2-ptr1<<endl;

    cout<<(ptr1<ptr2)<<endl;

    
    
}