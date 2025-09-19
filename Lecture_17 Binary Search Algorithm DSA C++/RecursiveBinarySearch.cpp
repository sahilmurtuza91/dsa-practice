#include<iostream>
#include<vector>
using namespace std;
int Tofind(vector<int> num,int target,int st, int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(target<num[mid]){
                return Tofind(num,target,st,mid-1);
            }
            else if(target>num[mid]){
                return Tofind(num,target,mid+1,end);
            }
            else{
                return mid;
            }
        }
        else
        return -1;
}
int main(){
    int target;
    vector<int>vec={1,2,3,4,5,6,7};
    cout<<"Entre the target number to find it: ";
    cin>>target;
    int st=0;
    int end=vec.size()-1;
    cout<<Tofind(vec, target, st, end);
    return 0;
}