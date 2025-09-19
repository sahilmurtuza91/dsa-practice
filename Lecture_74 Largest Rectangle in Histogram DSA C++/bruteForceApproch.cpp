#include<iostream>
#include<vector>
using namespace std;
int maxrectangle(vector<int>&nums){
    int maxArea=0;
    for(int i=0; i<nums.size(); i++){
        int minheight=nums[i];
        for(int j=i; j<nums.size(); j++){
            minheight=min(minheight,nums[j]);

            int width=j-i+1;

            int area=minheight*width;
            maxArea=max(area,maxArea);
        }
    }
    return maxArea;
}
int main(){
    vector<int>nums={2,1,5,6,2,3};
    cout<<maxrectangle(nums)<<endl;
    return 0;
}