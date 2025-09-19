#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
bool ismidvalid(vector<int>arr, int cow, int mid){
    int cout=1;
    int minstall=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]-minstall>=mid){
            cout++;
            minstall=arr[i];
        }
    }
    if(cout>=cow){
        return true;
    }
    else{
        return false;
    }
}
int AgressiveCowArrange(vector<int>arr, int cow){
    sort(arr.begin(),arr.end());
    int st=1;
    int end=arr.back()-arr[0];
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(ismidvalid(arr,cow,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return ans;
}
int main(){
    vector<int>stall={1,2,8,4,9};
    int cow=3;
    cout<<AgressiveCowArrange(stall, cow);
    return 0;
}