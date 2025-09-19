#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,6,8,7,5,2};
    for(int i=1; i<sizeof(arr)/sizeof(int)-1; i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            cout<<i;
            return 0;
        }
       
    }
    return -1;
}
