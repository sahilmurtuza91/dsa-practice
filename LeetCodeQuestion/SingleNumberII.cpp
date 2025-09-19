/*
except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space. 
*/

#include<iostream>
#include<vector>
using namespace std;
int SingleNumber(vector<int>&nums){
    int ones=0,twos=0;
    for(int num:nums){
        ones=(ones^num)& ~twos;
        twos=(ones^num)& ~ones;
    }
    return ones;
}
int main(){
    vector<int>nums={2,4,5,6,2,4,3,4,5,6,2,4,5,6};
    cout<<SingleNumber(nums)<<endl;
    return 0;
}