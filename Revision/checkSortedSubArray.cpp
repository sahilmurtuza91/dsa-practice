#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&nums,int n){
    if(n==0||n==1){
        return true;
    }
    return nums[n-1]>nums[n-2]&&check(nums,n-1);
}
int main(){
    vector<int>nums={3,4,6,8,9,11,23,56};
    int n=nums.size();
    cout<<check(nums,n)<<endl;
}