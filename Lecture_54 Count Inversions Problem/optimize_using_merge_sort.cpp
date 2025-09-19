#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&nums, int st, int mid, int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    int count=0;
    while(i<=mid && j<=end){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
            count=count+(mid-i+1);
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(nums[j]);
        j++;
    }
    for(int i=0; i<temp.size(); i++){
        nums[st+i]=temp[i];
    }
    return count;
}
int mergsort(vector<int>&nums,int st, int end){
    if(st<end){
        int mid=st+(end-st)/2;
        int leftinversion=mergsort(nums,st,mid);
        int rightinversion=mergsort(nums,mid+1,end);
        int inversion=merge(nums,st,mid,end);
        return leftinversion+rightinversion+inversion;
    }
    return 0;
}
int main(){
vector<int>nums={6,3,5,2,7};
    cout<<mergsort(nums,0,nums.size()-1)<<endl;
    return 0;
}