#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={6,8,0,1,3};
    stack<int>s;
    vector<int>ans(arr.size(),0);
    for(int i=0; i<arr.size();i++){
        while(s.size()>0 && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    // print the previous Smallest element
    for(int i:ans){
        cout<<i<<"  ";
    }cout<<endl;
    return 0;
}