#include<iostream>
#include<vector>
using namespace std;
int sountSumSubArray(int arr[], int n, int k){
    int count=0;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum=sum+arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int arr[]={1,1,1};
    int n=sizeof(arr)/sizeof(int);
    int k=2;
    cout<<sountSumSubArray(arr,n,k);
    return 0;
}
