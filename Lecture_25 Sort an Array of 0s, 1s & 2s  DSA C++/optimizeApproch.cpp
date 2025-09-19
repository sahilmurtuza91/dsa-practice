#include<iostream>
#include<vector>
using namespace std;
vector<int> sortArray(vector<int>nums){
    int count1=0,count2=0,count3=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            count1++;
        }
        else if(nums[i]==1){
            count2++;
        }
        else{
            count3++;
        }
    }
    int indx=0;
    for(int i=0; i<count1; i++){
        nums[indx++]=0;
    }
    for(int i=0; i<count2; i++){
        nums[indx++]=1;
    }
    for(int i=0; i<count3; i++){
        nums[indx++]=2;
    }
    return {nums};
}

int main(){
    vector<int>vec={2,0,2,1,1,0,1,2,0,0};
    vector<int>ans=sortArray(vec);
    for(int i:ans){
        cout<<i<<"  ";

    }
}