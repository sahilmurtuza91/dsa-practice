#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sortArray(vector<int>nums){
    sort(nums.begin(), nums.end());
    return {nums};
}
int main(){
    vector<int>vec={2,0,2,1,1,0,1,2,0,0};
    vector<int>ans=sortArray(vec);
    for(int i:ans){
        cout<<i<<"  ";

    }
}