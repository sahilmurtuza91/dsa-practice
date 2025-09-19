#include<iostream>
#include<vector>
using namespace std;
// this is the best approch for time and space complexity.
vector<int>product(vector<int>num){
    int n=num.size();
    vector<int>ans(n,1);
    for(int i=1; i<n; i++){
        ans[i]=ans[i-1]*num[i-1];
    }

    int suffix=1;
    for(int i=n-2; i>=0; i--){
        suffix=suffix*num[i+1];
        ans[i]=suffix*ans[i];
    }
    return ans;
}
int main(){
    vector<int>num={1,2,3,4};
    vector<int>fans=product(num);
    for(int i:fans){
        cout<<i<<" ";
    }
    return 0;
}