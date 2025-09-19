#include<iostream>
#include<vector>
using namespace std;

int findTarget(vector<int> num, int target){
    int n=num.size();
    int st=0, end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(target<num[mid]){
            end=mid-1;
        }
        else if(target>num[mid]){
            st=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>vec={1,2,3,4,5,6,7};
    int target;
    cout<<"Enter the number you want to find: ";
    cin>>target;
    cout<<findTarget(vec,target)<<endl;
    return 0;
}