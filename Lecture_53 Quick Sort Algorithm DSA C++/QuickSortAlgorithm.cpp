#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&nums,int st, int end){
    int indx=st-1; int pivot=nums[end];
    for(int j=st; j<end; j++){
        if(nums[j]<=pivot){
            indx++;
            swap(nums[j],nums[indx]);
        }
    }
    indx++;
    swap(nums[indx],nums[end]);
    return indx;
}
void QuickSort(vector<int>&nums,int st, int end){
    if(st<end){
        int pivot=partition(nums,st,end);
        QuickSort(nums,st,pivot-1);
        QuickSort(nums,pivot+1,end);
    }
}
int main(){
    vector<int>nums={5,2,6,4,1,3};
    QuickSort(nums,0,nums.size()-1);
    for(int i:nums){
        cout<<i<<"  ";
    }cout<<endl;
    return 0;
}