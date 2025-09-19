#include<iostream>
using namespace std;
int find(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
       
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target;
    cout<<"Enter the target to search ";
    cin>>target;
    int size=sizeof(arr)/sizeof(int);
    cout<<find(arr,size,target);
    return 0;
}