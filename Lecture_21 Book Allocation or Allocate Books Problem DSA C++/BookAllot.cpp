#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int>num, int n, int m, int max){
    int student=1;
    int pages=0;
    for(int i=0; i<n; i++){
        if(num[i]>max){
            return false;
        }
        if(pages+num[i]<=max){
            pages=pages+num[i];
        }
        else{
            student++;
            pages=num[i];
        }
    }
    if(student<=m){
        return true;
    }
    else{
        return false;
    }
}
int allocatedBooks(vector<int> arr, int n, int m){
    if(m>n){
        return -1;
    }
    int ans=-1;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int st=0; int end=sum;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr, n, m,mid)){
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
    cout<<allocatedBooks(nums,n,m);
    return 0;
}