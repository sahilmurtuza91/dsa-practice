#include<iostream>
#include<vector>
using namespace std;
bool searchelement(vector<vector<int>>& matrix, int target){
    int m=matrix.size();
    int n=matrix[0].size();
    int r=0;
    int c=n-1;
    while(r<m && c>=0){
        if(target==matrix[r][c]){
            return true;
        }
        else if(target<matrix[r][c]){
            c--;
        }
        else{
            r++;
        }
    }
    return false;
}
int main(){
    vector<vector<int>>matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,24},{18,21,23,26,30}};
    int target=55;
    cout<<searchelement(matrix,target);
    return 0;
}