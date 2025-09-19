#include<iostream>
#include<vector>
using namespace std;

int TOfindSingle(vector<int>nums){
    int st=0,n=nums.size(); 
    int end=n-1;
    if(n==1){
        return nums[0];
    }
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        if(mid==n-1 && nums[mid]!=nums[mid-1]){
            return nums[mid];
        }
        
        if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        if(mid%2==0){
            if(nums[mid-1]==nums[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
        }
        else{
            if(nums[mid-1]==nums[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        
    }
    return -1;
}
int main(){
    vector<int>vec={1,1,3,3,4,8,8};
    cout<<TOfindSingle(vec)<<endl;
}