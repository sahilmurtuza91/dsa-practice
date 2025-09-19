#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>Inversion(vector<int>nums){
    vector<vector<int>>ans;
    int n=nums.size();
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]>nums[j]){
                ans.push_back({nums[i],nums[j]});
                count++;
            }
        }
    }
    cout<<"Total number of inverse is: "<<count<<endl;
    return ans;
}
int main(){
    vector<int>nums={6,3,5,2,7};
    vector<vector<int>>fans=Inversion(nums);
    for(vector<int>i:fans){
        for(int j:i){
            cout<<j<<" ";
        }cout<<endl;
    }
}