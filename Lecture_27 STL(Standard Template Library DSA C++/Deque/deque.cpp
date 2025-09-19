#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(6);
    d.push_back(67);
    d.push_back(3);
    d.push_front(34);
    for(int k:d){
        cout<<k<<" ";
    }cout<<endl;

}