#include<iostream>
#include<vector>
using namespace std;
int Tofind(vector<int>nums, int target){
    int st=0, end=nums.size()-1;
    while(st<=end){

        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[st]<=nums[mid]){
            if(nums[st]<=target && target<=nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(nums[mid]<=target && target <=nums[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>vec={3,4,5,6,0,1,2};
    cout<<"Enter the target: ";
    int target;
    cin>>target;
    cout<<Tofind(vec,target)<<endl;
}