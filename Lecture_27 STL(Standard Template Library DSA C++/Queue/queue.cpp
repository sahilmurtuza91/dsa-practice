#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>s;
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.front()<<endl;
        s.pop();

    }
}