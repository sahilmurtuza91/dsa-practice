#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    for(int st=0; st<sizeof(arr)/sizeof(int); st++){
        for(int end=st; end<sizeof(arr)/sizeof(int); end++){
                for(int i=st; i<=end; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<" | ";
        }
        cout<<endl;
    }
    return 0;
}