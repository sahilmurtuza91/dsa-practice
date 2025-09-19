#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>fourthSum(vector<int>&nums){
    sort(nums.begin(), nums.end());
    int n=nums.size();
    vector<vector<int>>ans;
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(j>i+1 && nums[j]==nums[j-1]){
                continue;
            }
            int p=j+1;
            int q=n-1;
            while(p<q){
                int sum=nums[i]+nums[j]+nums[p]+nums[q];
                if(sum<0){
                    p++;
                }
                else if(sum>0){
                    q--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                    p++;
                    q--;
                    while(p<q && nums[p]==nums[p+1]){
                        p++;
                    }
                    while(p<q && nums[q]==nums[q-1]){
                        q--;
                    }
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4,-2,-3};
    vector<vector<int>>fans=fourthSum(nums);
    for(vector<int>i:fans){
        for(int j:i){
            cout<<j<<"  ";
        }cout<<endl;
    }
    return 0;
}