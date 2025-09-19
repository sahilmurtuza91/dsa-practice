#include<iostream>
#include<vector>
using namespace std;
bool isvalidstep(vector<vector<int>>&grid,int r,int c,int n, int expectedValue){
    if(r<0||c<0||r>=n||c>=n||expectedValue!=grid[r][c]){
        return false;
    }
    if(expectedValue==n*n-1){
        return true;
    }
    int ans1=isvalidstep(grid,r-2,c+1,n,expectedValue+1);
    int ans2=isvalidstep(grid,r-1,c+2,n,expectedValue+1);
    int ans3=isvalidstep(grid,r+1,c+2,n,expectedValue+1);
    int ans4=isvalidstep(grid,r+2,c+1,n,expectedValue+1);
    int ans5=isvalidstep(grid,r+2,c-1,n,expectedValue+1);
    int ans6=isvalidstep(grid,r+1,c-2,n,expectedValue+1);
    int ans7=isvalidstep(grid,r-2,c-1,n,expectedValue+1);
    int ans8=isvalidstep(grid,r-1,c-2,n,expectedValue+1);
    return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
}
bool findknightproblem(vector<vector<int>>&grid){
    return isvalidstep(grid,0,0,grid.size(),0);
}
int main(){
    vector<vector<int>>grid={{0,11,16,5,20},{17,4,19,10,15},{12,1,8,21,6},{3,18,23,14,9},{24,13,2,7,22}};
    cout<<findknightproblem(grid)<<endl;
}