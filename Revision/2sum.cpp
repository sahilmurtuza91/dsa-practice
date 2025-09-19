#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> pairSum(vector<int>& pair, int target){
    int n=pair.size();
    unordered_map<int, int>m;
    vector<int>ans;
    for(int i=0; i<n; i++){
        int first=pair[i];
        int second=target-first;
        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            return ans;
        }
        m[first]=i;
    }
    return {};
}
int main(){
    vector<int>nums={1,2,4,5,7,9};
    int target =9;
    vector<int>ans=pairSum(nums,target);
    for(int i:ans){
        cout<<i<<", ";
    }cout<<endl;
    return 0;
}