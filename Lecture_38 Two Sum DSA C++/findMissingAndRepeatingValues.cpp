#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> findMissingAndRepeatingValues(vector<vector<int>>grids){
    int n=grids.size();
    int a,b;
    vector<int>ans;
    unordered_set<int>s;
    int expetsum=0, actsum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            actsum=actsum+grids[i][j];
            if(s.find(grids[i][j])!=s.end()){
                a=grids[i][j];
                ans.push_back(a);
            }
            s.insert(grids[i][j]);
        }
    }
    expetsum=(n*n)*(n*n+1)/2;
    b=expetsum+a-actsum;
    ans.push_back(b);
    return ans;
}
int main(){
    vector<vector<int>>grids={{9,1,7},{8,9,2},{3,4,6}};
    vector<int>fans=findMissingAndRepeatingValues(grids);
    for(int i: fans){
        cout<<i<<"  ";
    }
    cout<<endl;
    return 0;
}