#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int maxSum=INT8_MIN;
    for(int st=0; st<sizeof(arr)/sizeof(int); st++){
        int currenSum=0;
        for(int end=st; end<sizeof(arr)/sizeof(int); end++){
                currenSum=currenSum+arr[end];
                maxSum=max(currenSum,maxSum);
        }
        
    }
    cout<<"the maximum sum of the subArray is "<<maxSum<<endl;
    return 0;
}