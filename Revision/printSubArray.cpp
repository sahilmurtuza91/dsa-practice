#include<iostream>
#include<vector>
using namespace std;
void PrintSubArray(vector<int>&nums, vector<int>&ans, int i){
    if(i==nums.size()){
        for(int i:ans){
            cout<<i<<"  ";
        }cout<<endl;
        return;
    }
    // for include
    ans.push_back(nums[i]);
    PrintSubArray(nums,ans,i+1);
    // for exclude
    ans.pop_back();
    PrintSubArray(nums,ans,i+1);
}
int main(){
    vector<int>nums={1,2,3};
    vector<int>ans;
    PrintSubArray(nums,ans,0);
    return 0;
}