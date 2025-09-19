#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<vector<int>>s;
void getallcom(vector<int>&nums,int indx,int target,vector<vector<int>>&ans,vector<int>&comb){
    if(indx==nums.size()||target<0){
        return;
    }
    if(target==0){
        if(s.find(comb)==s.end()){
            ans.push_back({comb});
            s.insert(comb);
        }
    }

    comb.push_back(nums[indx]);
    // single time
    getallcom(nums,indx+1,target-nums[indx],ans,comb);
    //multiple time
    getallcom(nums,indx,target-nums[indx],ans,comb);
    //to call the excludive we use this
    comb.pop_back();
    //not a single time
    getallcom(nums,indx+1,target,ans,comb);

}
vector<vector<int>>combinationSum(vector<int>&nums,int target){
    vector<vector<int>>ans;
    vector<int>comb;
    getallcom(nums,0,target,ans,comb);
    return ans;
}
int main(){
    vector<int>nums={2,3,5};
    int target=8;
    vector<vector<int>>ans=combinationSum(nums,target);
    for(vector<int>i:ans){
        for(int j:i){
            cout<<j<<"  ";
        }cout<<endl;
    }
    return 0;
}