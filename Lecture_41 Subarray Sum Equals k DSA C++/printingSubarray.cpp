#include<iostream>
using namespace std;
void printSubArray(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    printSubArray(arr,n);
    return 0;
}