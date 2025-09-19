#include<iostream>
#include<vector>
using namespace std;
bool rowmid(vector<vector<int>>nums, int target, int row){
    int n=nums[row].size();
    int st=0, end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target==nums[row][mid]){
            return true;
        }
        else if(target<nums[row][mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return false;

}
bool findtarget(vector<vector<int>>&nums, int target){
    int m=nums.size();
    int n=nums[0].size();
    int srow=0;
    int erow=m-1;
    while(srow<=erow){
        int mid=srow+(erow-srow)/2;
        if(target>=nums[mid][0] && target<=nums[mid][n-1]){
            return rowmid(nums, target, mid);
        }
        else if(target>nums[mid][0]){
            srow=mid+1;
        }
        else{
            erow=mid-1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>nums={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=111;
    cout<<findtarget(nums,target);
    return 0;

}