#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&nums,int st,int mid,int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
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
        nums[i+st]=temp[i];
    }
}
void mergsort(vector<int>&nums,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        mergsort(nums,st,mid);
        mergsort(nums,mid+1,end);
        merge(nums,st,mid,end);
    }
}
int main(){
    vector<int>nums={23,56,12,96,45,36};
    mergsort(nums,0,nums.size()-1);
    for(int i:nums){
        cout<<i<<"  ";
    }cout<<endl;
    return 0;
}