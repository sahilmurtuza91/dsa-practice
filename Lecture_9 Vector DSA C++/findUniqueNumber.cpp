#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,1,2,4};
    cout<<"Printing the unique element"<<endl;
    int ans=0;
    for(int i: vec){
        ans=ans^i;
    }
    cout<<ans<<endl;
    
    return 0;
}