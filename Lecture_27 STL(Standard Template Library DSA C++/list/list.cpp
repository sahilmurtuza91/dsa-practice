#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(5);
    ls.push_back(8);
    ls.push_front(3);
    for(int i:ls){
        cout<<i<<" ";
    }cout<<endl;
    cout<<ls.size();
}