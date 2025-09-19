#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> printindex(vector<int>&nums){
    int n=nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>>ans;
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k && nums[j]==nums[j+1]){
                    j++;
                }
                while(j<k && nums[k]==nums[k-1]){
                    k--;
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4,-2,-1,-3};
    vector<vector<int>>fans=printindex(nums);
    for(vector<int>i:fans){
        for(int j:i){
            cout<<j<<"  ";
        }cout<<endl;
    }
    return 0;
}