#include<iostream>
using namespace std;
void changeArr(int arr[], int size){
    cout<<"Here we change the array value and check that there value in original array will chnage or not"<<endl;
    for(int i=0; i<size; i++){
        arr[i]=2*arr[i];
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Here We are printing the original value of an array befor calliing a function"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nCalling a function to check wheather original value will change or not after changing the value in function:"<<endl;
    changeArr(arr,size);
    cout<<endl;
    cout<<"Again the value will be printed aftre calling the function:"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    // the value of original array will be change by changing the its value in the function because it will pass the address (pass by reference ) not make the copy
}