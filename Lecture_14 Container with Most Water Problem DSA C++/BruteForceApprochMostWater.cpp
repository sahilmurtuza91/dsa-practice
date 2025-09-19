#include<iostream>
using namespace std;
int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int maxWater=0;
    int height=0;
    int area=0;
    cout<<"Finding the maximum amount od water stored in container"<<endl;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        for(int j=i+1;j<sizeof(arr)/sizeof(int); j++){
            height=min(arr[j],arr[i]);
            area=height*(j-i);
            maxWater=max(maxWater,area);
        }
    }
    cout<<"The maximum amount of water is "<<maxWater<<endl;
    return 0;
    
}