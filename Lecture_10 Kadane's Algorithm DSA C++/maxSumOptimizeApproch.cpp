#include<iostream>
 #include <climits>
using namespace std;
int main(){
    int arr[]={-1,-2,-3,-4,-5};
    int maxSum = INT_MIN;

    int currenSum=0;
    for(int st=0; st<sizeof(arr)/sizeof(int); st++){
        currenSum=currenSum+arr[st];
        maxSum=max(currenSum,maxSum);
        if(currenSum<0){
            currenSum=0;
        }
        
    }
    cout<<"the maximum sum of the subArray is "<<maxSum<<endl;
    return 0;
}