#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortarray(vector<int>&nums){
    int mid=0, high=nums.size()-1,low=0;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main(){
    vector<int>vec={2,0,2,1,1,0,1,2,0,0};
    sortarray(vec);
    for(int i:vec){
        cout<<i<<" ";
    }
}