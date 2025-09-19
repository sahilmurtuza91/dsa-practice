#include<iostream>
#include<vector>
using namespace std;
bool valid(vector<int>arr, int n , int m, int max){
    int student=1; int pages=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            return false;
        }
        if(pages+arr[i]<=max){
            pages=pages+arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    if(student>m){
        return false;
    }
    else{
        return true;
    }
}
int bookallotment(vector<int>arr, int n, int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    int st=0, end=sum;
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(valid(arr,n,m,mid)){
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
     vector<int> nums={2,1,3,4};
    int n=4, m=2;
    cout<<bookallotment(nums,n,m);
}