#include<iostream>
#include<vector>
using namespace std;
int Findpeak(vector<int>nums){
    int st=1, end=nums.size()-2;  // becaue start and end will never be the peek point
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
            return mid;
        }
        if(nums[mid-1]<nums[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>vec={0,3,8,9,5,2};
    cout<<Findpeak(vec)<<endl;
    return 0;
}