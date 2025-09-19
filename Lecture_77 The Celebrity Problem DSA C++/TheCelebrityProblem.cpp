#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int getcelebrity(vector<vector<int>>nums){
    int n=nums.size();
    stack<int>s;
    for(int i=0; i<n; i++){
        s.push(i);
    }
    while(s.size()>1){
        int i=s.top();
        s.pop();

        int j=s.top();
        s.pop();

        if(nums[i][j]==0){
            s.push(i);
        }else{
            s.push(j);
        }
    }
    int cel=s.top();
    for(int i=0; i<n; i++){
        if(i!=cel && nums[i][cel]==0 || nums[cel][i]==1){
            return -1;
        }
    }
    return cel;
}
int main(){
    vector<vector<int>>nums={
    {0, 1, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 0}, 
    {0, 1, 1, 0}};
    cout<<getcelebrity(nums)<<endl;
    return 0;
}