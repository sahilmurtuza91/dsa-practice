#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> majorityElement(vector<int>num){
    int n=num.size();
    sort(num.begin(),num.end());
    int fre=1;
    int ans=num[0];
    for(int i=1; i<num.size(); i++){
        if(num[i]==num[i-1]){
            fre++;
        }
        else{
            fre=1;
            ans=num[i];
        }
        if(fre>n/2){
            cout<<"The majority element is "<<num[i]<<endl;
            return {num[i]};
        }
    }
    cout<<"No majority element";
    return{};
}
int main(){
    vector<int>vec={1,2,2,1,1};
    majorityElement(vec);
}