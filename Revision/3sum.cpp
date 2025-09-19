#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> printindex(vector<int>&nums){
    int n=nums.size();
    set<vector<int>>uniquetrip;
    for(int i=0; i<n; i++){
        set<int>s;
        for(int j=i+1; j<n; j++){
            int third=-(nums[i]+nums[j]);
            if(s.find(third)!=s.end()){
                vector<int>tri={nums[i],nums[j],third};
                sort(tri.begin(),tri.end());
                uniquetrip.insert(tri);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>>ans(uniquetrip.begin(),uniquetrip.end());
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