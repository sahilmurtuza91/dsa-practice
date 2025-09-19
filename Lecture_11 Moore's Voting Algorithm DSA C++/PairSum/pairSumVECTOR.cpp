#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>num, int target){
    vector<int>num1;
    for(int i=0; i<num.size(); i++){
        for(int j=i+1; j<num.size(); j++){
            if(num[i]+num[j]==target){
                num1.push_back(num[i]);
                num1.push_back(num[j]);
                return num1;
            }
        }
    }
    return {};  // Return empty vector if no such pair exists
}
int main(){
    cout<<"Enter the target number to find its sum pair: ";
    int target;
    cin>>target;
    vector<int>vec={2,3,6,7,9,5,8,1};
    vector<int>num2=pairSum(vec,target);   // pairSum() returns a vector of integers containing a pair of 
                                           // numbers   from vec whose sum is target. so that a create a vector to store its value
    cout<<num2[0]<<", "<<num2[1]<<endl;
    return 0;
}