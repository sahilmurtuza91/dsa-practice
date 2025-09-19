#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>NextGreatestElement(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,-1);
    stack<int>s;
    for(int i=2*n-1; i>=0; i--){
        while(s.size()>0 && nums[s.top()]<=nums[i%n]){
            s.pop();
        }
        ans[i%n]=s.empty()?-1:nums[s.top()];
        s.push(i%n);
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4,3};
    vector<int>fans=NextGreatestElement(nums);
    for(int item:fans){
        cout<<item<<"   ";
    }cout<<endl;
    return 0;
}