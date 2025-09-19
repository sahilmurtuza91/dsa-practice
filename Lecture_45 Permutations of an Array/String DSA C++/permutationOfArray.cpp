#include<iostream>
#include<vector>
using namespace std;
void getallpermutation(vector<int>& nums,vector<vector<int>>& ans, int indx,int & count){
    if(indx==nums.size()){
        ans.push_back({nums});
        count=count+1;
        return;
    }
    for(int i=indx; i<nums.size(); i++){
        swap(nums[indx],nums[i]);
        getallpermutation(nums,ans,indx+1,count);
        swap(nums[indx],nums[i]);
    }
}
vector<vector<int>> permutation(vector<int>& nums, int & count){
    vector<vector<int>>ans;
    getallpermutation(nums,ans,0,count);
    return ans;
}
int main(){
    vector<int>nums={1,2,3};
    int count=0;
    vector<vector<int>>fans=permutation(nums,count);
    for(vector<int>i:fans){
        for(int j:i){
            cout<<j<<"  ";
        }cout<<endl;
    }
    cout<<"Total number of permuatation "<<count<<endl;
}