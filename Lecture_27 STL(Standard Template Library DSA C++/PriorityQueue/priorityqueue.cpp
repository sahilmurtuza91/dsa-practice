#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int>s;
    priority_queue<int,vector<int>,greater<int>>s;
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();

    }
}