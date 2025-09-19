/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
*/
#include<iostream>
using namespace std;
int squareRoot(int x){
    if(x==0||x==1){
        return x;
    }
    long long st=1,end=x,ans=0;
    while(st<=end){
        long long mid=st+(end-st)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
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
    int x=8;
    cout<<squareRoot(x);
}