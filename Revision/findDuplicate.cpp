#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>nums){
    int n=nums.size();
    int start=nums[0];
    int end=nums[0];
    do
    {
        start=nums[start];
        end=nums[nums[end]];
    } while (start!=end);
    start=nums[0];
    while(start!=end){
        start=nums[start];
        end=nums[end];
    }
    return start;
    
}
int main(){
    vector<int>nums={1,3,4,2,2};
    cout<<find(nums);
}