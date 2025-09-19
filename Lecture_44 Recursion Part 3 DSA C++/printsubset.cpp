#include<iostream>
#include<vector>
using namespace std;
void getallsubset(vector<int>& nums, vector<int> & ans, int i, vector<vector<int>>& allsubset){
    if(i==nums.size()){
        allsubset.push_back({ans});
        return;
    }
    ans.push_back(nums[i]);
    getallsubset(nums,ans,i+1,allsubset);
    ans.pop_back();
    getallsubset(nums,ans,i+1,allsubset);
}
vector<vector<int>>subsetOfArray(vector<int>&nums){
    vector<int>ans;
    vector<vector<int>>allsubset;
    getallsubset(nums,ans,0,allsubset);
    return allsubset;
}
int main(){
    vector<int>nums={1,2,3,4,5,6,7};
    vector<vector<int>>fans=subsetOfArray(nums);
    for(vector<int>i:fans){
        cout<<"{";
        for(int j:i){
            cout<<j<<"  ";
        }cout<<"}"<<endl;;
    }
    return 0;
}