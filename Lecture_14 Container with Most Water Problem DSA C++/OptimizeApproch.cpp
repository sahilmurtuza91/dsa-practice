#include<iostream>
using namespace std;
int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(arr)/sizeof(int);
    int maxwater=0;
    int lp=0, rp=n-1;
    while(lp<rp){
        int w=rp-lp;
        int h=min(arr[lp], arr[rp]);
        int currntwater=w*h;
        maxwater=max(currntwater,maxwater);
        if(arr[lp]<arr[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }
    cout<<"Maximum water "<<maxwater<<endl;
}