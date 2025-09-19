#include<iostream>
#include<vector>
using namespace std;

vector<int>product(vector<int>num){
    int n=num.size();
    vector<int>ans(n,1);
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);

    //prefix calculation for each number
    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]*num[i-1];
    }

    //suffix calculation for each number
    for(int i=n-2; i>=0; i--){
        suffix[i]=suffix[i+1]*num[i+1];
    }

    //answer calculation and stored in ans vector
    for(int i=0; i<n; i++){
        ans[i]=prefix[i]*suffix[i];
    }
    return ans;
}
int main(){
    vector<int>num={1,2,3,4};
    vector<int>fans=product(num);
    for(int i:fans){
        cout<<i<<" ";
    }

    //but in this the space complexity is not optimize 
    return 0;
}