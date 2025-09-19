#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getallsubset(vector<int>& nums,vector<int>& ans, int i, vector<vector<int>>& allsubset){
    if(i==nums.size()){
        allsubset.push_back({ans});
        return;
    }
    ans.push_back(nums[i]);
    getallsubset(nums,ans,i+1,allsubset);
    ans.pop_back();
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
    }
    getallsubset(nums,ans,idx,allsubset);
}
vector<vector<int>>subsetWithoutDuplication(vector<int>& nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>>allsubset;
    vector<int>ans;
    getallsubset(nums,ans,0,allsubset);
    return allsubset;

}
int main(){
    vector<int>nums={1,2,2};
    vector<vector<int>>fans=subsetWithoutDuplication(nums);
    for(vector<int>i:fans){
        for(int j:i){
            cout<<j<<"  ";
        }cout<<endl;
    }
    return 0;
}
 