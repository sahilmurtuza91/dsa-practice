#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int>maxvalue(vector<int>& nums,int k){
    int size=nums.size();
    deque<int>dq;
    vector<int>result;
    int key=k;
    for(int i=0; i<key; i++){
        while(dq.size()>0 && nums[dq.back()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i=k; i<size; i++){
        result.push_back(nums[dq.front()]);

        while(dq.size()>0 && dq.front()<=i-k){
            dq.pop_front();
        }

        while(dq.size()>0 && nums[dq.back()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    result.push_back(nums[dq.front()]);
    return result;
}
int main(){
    vector<int>nums={1,3,-1,-3,5,3,6,7};
    vector<int>fans=maxvalue(nums,3);
    for(int i: fans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}