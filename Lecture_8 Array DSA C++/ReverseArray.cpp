#include<iostream>
using namespace std;
void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Print the array"<<endl;
    printArray(arr,size);
    reverse(arr,size);
    cout<<"\nReverse an  array"<<endl;
    printArray(arr,size);

    
    return 0;
}