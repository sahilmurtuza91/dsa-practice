#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>& num , int target){
    int n=num.size();
    int st=0;
    int end=n-1;
    while(st<end){
        if(num[st]+num[end]==target){
            return {st,end};
        }
        else if(num[st]+num[end]>target){
            end--;
        }
        else{
            st++;
        }
    }
    return {};
}
int main(){
    vector<int>num={1,2,4,5,7,9};
    int target=9;
    vector<int>ans=pairsum(num,target);
    for(int i: ans){
        cout<<i<<"  ";
    }cout<<endl;
}