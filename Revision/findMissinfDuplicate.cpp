#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> find(vector<vector<int>> nums){
    vector<int>ans;
    int n=nums.size();
    unordered_set<int>s;
    int a,b;
    int expectedSum=0, actualSum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            actualSum=actualSum+nums[i][j];
            if(s.find(nums[i][j])!=s.end()){
                a=nums[i][j];
                ans.push_back(a);
            }
            s.insert(nums[i][j]);
        }
    }
    expectedSum=(n*n)*(n*n+1)/2;
    b=expectedSum+a-actualSum;
    ans.push_back(b);
    return ans;
}
int main(){
        vector<vector<int>>grids={{9,1,7},{8,9,2},{3,4,6}};
        vector<int>fans=find(grids);
        for(int i: fans){
            cout<<i<<"  ";
        }cout<<endl;
        return 0;
}