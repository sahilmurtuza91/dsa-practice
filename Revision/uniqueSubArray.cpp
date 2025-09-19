#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getallsubset(vector<int>&nums,vector<int>&ans,vector<vector<int>>&allsubset,int i){
    if(i==nums.size()){
        allsubset.push_back({ans});
        return;
    }

    ans.push_back(nums[i]);
    getallsubset(nums,ans,allsubset,i+1);
    ans.pop_back();
    int indx=i+1;
    while(indx<nums.size() && nums[indx]==nums[indx-1]){
        indx++;
    }
    getallsubset(nums,ans,allsubset,indx);
}
vector<vector<int>>subset(vector<int>&nums){
    vector<vector<int>>allsubset;
    vector<int>ans;
    sort(nums.begin(),nums.end());
    getallsubset(nums,ans,allsubset,0);
    return allsubset;
}
int main(){
    vector<int>nums={1,2,2};
    vector<vector<int>>ans=subset(nums);
    for(vector<int>i:ans){
        for(int j:i){
            cout<<j<<"  ";
        }cout<<endl;
    }
    return 0;
}