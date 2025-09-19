#include<iostream>
using namespace std;
int main(){
    cout<<"Entre the number to print the prime number"<<endl;
    int x;
    cin>>x;
    cout<<"The prime number between 1 and "<<x<<" are:-"<<endl;
        for(int i=2; i<=x; i++){
        int count=0;
        for(int j=1; j<=x ;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
        cout<<i<<endl;
        }
    }
    return 0;
}