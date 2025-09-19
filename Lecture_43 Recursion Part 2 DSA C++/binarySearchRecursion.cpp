#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int>&arr,int target, int st, int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            return binary(arr,target,mid+1,end);
        }
        else{
            return binary(arr,target,st,mid-1);
        }
    }
    return -1;
}
int findElement(vector<int>& arr, int target){
    return binary(arr,target,0,arr.size()-1);
}
int main(){
    vector<int>arr={2,4,5,7,8,9};
    int target=5;
    cout<<findElement(arr,target);
    return 0;
}