#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,6,1,2,9};
    int n=sizeof(arr)/sizeof(int);
    for(int i=1; i<n; i++){
        int current=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"     ";
    }
    cout<<endl;
}