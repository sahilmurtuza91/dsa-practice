#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the target number to find its sum pair: ";
    int target;
    cin>>target;
    int arr[]={2,3,6,7,9,5,8,1};
    bool a=true;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        for(int j=i+1; j<sizeof(arr)/sizeof(int);j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<", "<<arr[j]<<endl;
                    a=false;
            }
            
        }
    }
    if(a==true){
                cout<<"No pair is eixt that sum is equal to "<<target<<endl;
            }
    return 0;
}