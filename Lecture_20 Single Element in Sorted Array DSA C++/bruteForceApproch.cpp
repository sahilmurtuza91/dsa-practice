#include<iostream>
#include<vector>
using namespace std;
int findSingle(vector<int>nums){
    int ans=0;
    for(int i=0; i<nums.size(); i++){
      ans=ans^nums[i];
    }
    return ans;
}
int main(){
    vector<int>vec={1,1,2,2,3,3,4,4,7,8,8};
    cout<<findSingle(vec)<<endl;
}