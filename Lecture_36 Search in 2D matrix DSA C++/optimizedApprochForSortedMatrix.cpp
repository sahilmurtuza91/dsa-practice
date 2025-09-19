#include<iostream>
#include<vector>
using namespace std;
/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
*/

bool searchRow(vector<vector<int>>matrix,int target, int midrow){
    int m=matrix.size();
    int n=matrix[midrow].size();
    int st=0; int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(target==matrix[midrow][mid]){
            return true;
        }
        else if(target>matrix[midrow][mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
bool SearchNumber(vector<vector<int>>& matrix, int target){
    int m=matrix.size();
    int n=matrix[0].size();
    int strow=0;
    int endrow=m-1;
    while(strow<=endrow){
        int midrow=strow+(endrow-strow)/2;
        if(target>=matrix[midrow][0] && target<=matrix[midrow][n-1]){
            return searchRow(matrix,target,midrow);
        }
        else if(target>=matrix[midrow][0]){
            strow=midrow+1;
        }
        else{
            endrow=midrow-1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=11;
    cout<<SearchNumber(matrix,target);
    return 0;

}