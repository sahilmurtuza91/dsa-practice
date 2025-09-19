#include<iostream>
#include<vector>
using namespace std;

vector<int> ArrayMultiplication(vector<int>vec){
    vector<int>ans;
    for(int i=0; i<vec.size(); i++){
        int product=1;
        for(int j=0; j<vec.size(); j++){
            if(i!=j){
                product=product*vec[j];
            }
            
        }ans.push_back(product);
    }
    return ans;
}
int main(){
    vector<int>vec={1,2,3,4};
    vector<int>fans=ArrayMultiplication(vec);
    for(int i=0; i<fans.size(); i++){
        cout<<fans[i]<<" ";
    }cout<<endl;
    return 0;
}