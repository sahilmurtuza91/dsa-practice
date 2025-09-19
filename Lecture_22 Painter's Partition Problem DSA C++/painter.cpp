#include<iostream>
#include<vector>
using namespace std;

bool valid(vector<int>arr, int n, int m, int max){
    int painter=1;
    int bordpaint=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            return false;
        }
        if(bordpaint+arr[i]<=max){
            bordpaint+=arr[i];
        }
        else{
            painter++;
            bordpaint=arr[i];
        }
    }
    if(painter>m){
        return false;
    }
    else{
        return true;
    }
}
int minimumTime(vector<int>arr, int n, int m){
    int maxval=arr[0];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxval=max(maxval,arr[i]);
    }
    int st=maxval;
    int end=sum;
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(valid(arr, n, m , mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={40,30,10,20};
    int n=4, m=2;
    cout<<minimumTime(nums,n,m);
    return 0;
}