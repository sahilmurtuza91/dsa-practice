#include<iostream>
using namespace std;
int main(){
    int arr[]={9,3,6,8,1,2,39};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        int small=i;
        for(int j=i+1;j<n; j++){
            if(arr[small]>arr[j]){
                    small=j;
            }
        }
        swap(arr[small],arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}