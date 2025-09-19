#include<iostream>
#include<vector>
using namespace std;
int findSingle(vector<int>nums){
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1]!=nums[i] && nums[i]!=nums[i+1]){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    vector<int>vec={1,1,2,2,3,3,4,4,7,8,8};
    cout<<findSingle(vec)<<endl;
}