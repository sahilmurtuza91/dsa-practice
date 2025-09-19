#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={2,5,1,9,4,8,5};
    // sort(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(),greater<int>());
    for(int i:vec){
        cout<<i<<" ";
    }cout<<endl;
}
