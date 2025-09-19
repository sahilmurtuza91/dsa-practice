#include<iostream>
#include<vector>
using namespace std;
    vector<int>spiramatrix(vector<vector<int>>matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0;
        int erow=m-1;
        int scol=0;
        int ecol=n-1;
        vector<int>ans;
        while(srow<=erow && scol<=ecol){
            for(int i=srow; i<=ecol; i++){
                ans.push_back(matrix[srow][i]);
            }
            for(int i=srow+1; i<=erow; i++){
                ans.push_back(matrix[i][ecol]);
            }
            for(int i=ecol-1; i>=scol; i--){
                if(srow==erow){
                    break;
                }
                ans.push_back(matrix[erow][i]);
            }
            for(int i=erow-1; i>=srow+1; i--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }
        srow++;
        scol++;
        erow--;
        ecol--;;
        }
        return ans;
    }
int main(){
vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
vector<int>ans=spiramatrix(matrix);
for(int i:ans){
    cout<<i<<"  ";
}cout<<endl;
return 0;
}