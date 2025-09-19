#include<iostream>
#include<vector>
using namespace std;
int countSubArraySum(vector<int>&nums,int target){
    int n=nums.size();int count=0;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum=sum+nums[j];
            if(sum==target){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int>nums={1,2,3,4};
    int target=3;
    cout<<countSubArraySum(nums,target)<<endl;
    return 0;
}