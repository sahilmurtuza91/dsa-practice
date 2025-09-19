#include<iostream>
#include<vector>
using namespace std;
vector<int> pairnum(int arr[], int target, int n){
    for(int i=0; i<n; i++){
        int first=arr[i];
        for(int j=i+1; j<n; j++){
            if((first+arr[j])==target){
                return {i,j};
            }

        }
    }return {-1,-1};
}
int main(){
    int arr[]={1,2,4,5,7,9};
    int target =9;
    int n=sizeof(arr)/sizeof(int);
    vector<int>ans=pairnum(arr,target,n);
    for(int i:ans){
        cout<<i<<"  ";
    }cout<<endl;
    return 0;
}