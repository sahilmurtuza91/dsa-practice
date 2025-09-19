#include<iostream>
#include<vector>
using namespace std;
vector<int> maximum(vector<int>&nums, int k){
    int size=nums.size();
    vector<int>ans;
    int val=0;
    int key=k;
    for(int i=0; i<=size-key; i++){
        int maxv=nums[i];
        for(int j=i; j<i+key; j++){
            maxv=max(maxv,nums[j]);
        }
        ans.push_back(maxv);
    }
    return ans;
}
int main(){
    vector<int>nums={1,3,-1,-3,5,3,6,7};
    int k=3;
    vector<int>fans=maximum(nums,k);
    for(int i:fans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}