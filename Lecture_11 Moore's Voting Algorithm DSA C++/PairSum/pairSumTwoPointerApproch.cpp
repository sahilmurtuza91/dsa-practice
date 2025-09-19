#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>num, int target){
    vector<int>num1;
int n=num.size();
int i=0;
int j=n-1;
while(i<j){  // This approch will work efficinent in the sorted array 
    if(num[i]+num[j]>target){
        j--;
    }
    else if(num[i]+num[j]<target){
        i++;
    }
    else{
        num1.push_back(num[i]);
        num1.push_back(num[j]);
        return num1;
    }

}
}
int main(){
    cout<<"Enter the target number to find its sum pair: ";
    int target;
    cin>>target;
    vector<int>vec={2,3,4,5,6,7};
    vector<int>num2=pairSum(vec,target);   // pairSum() returns a vector of integers containing a pair of 
                                           // numbers   from vec whose sum is target. so that a create a vector to store its value
    cout<<num2[0]<<", "<<num2[1]<<endl;
    return 0;
}