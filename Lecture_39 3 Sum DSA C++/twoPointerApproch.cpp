#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>>threesum(vector<int>& nums){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1, k=n-1;
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
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>>tri=threesum(nums);
    for(vector<int>i: tri){
        for(int j: i){
            cout<<j<<"  ";
        }cout<<endl;
    }
    return 0;
}