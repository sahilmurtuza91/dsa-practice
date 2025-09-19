#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
vector<vector<int>>threeSum(vector<int>& nums){
    int n=nums.size();
    set<vector<int>>uniquetrip;
    for(int i=0; i<n; i++){
        int tar=-nums[i];
        set<int>s;
        for(int j=i+1; j<n; j++){
            int third=tar-nums[j];
            if(s.find(third)!=s.end()){
                vector<int>trip={nums[i],nums[j],third};
                sort(trip.begin(),trip.end());
                uniquetrip.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>>ans(uniquetrip.begin(),uniquetrip.end());
    return ans;
}
int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>>fans=threeSum(nums);
    for(vector<int> trip:fans){
        for(int i:trip){
            cout<<i<<"  ";
        }cout<<endl;
    }
    return 0;
}