/*
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
*/
#include<iostream>
#include<stack>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>num1={4,1,2};
    vector<int>nums2={1,3,4,2};
    unordered_map<int,int>m;
    stack<int>s;
    
    for(int i=nums2.size()-1; i>=0; i--){
        while(s.size()>0 && s.top()<=nums2[i]){
            s.pop();
        }
        if(s.empty()){
            m[nums2[i]]=-1;
        }
        else{
            m[nums2[i]]=s.top();
        }
        s.push(nums2[i]);
    }
    vector<int>ans;
    for(int i=0; i<num1.size(); i++){
        ans.push_back(m[num1[i]]);
    }
    for(int i:ans){
        cout<<i<<"  ";
    }cout<<endl;
    return 0;
}