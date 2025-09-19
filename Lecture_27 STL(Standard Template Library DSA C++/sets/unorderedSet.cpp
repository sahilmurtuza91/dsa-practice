#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(3);
    s.insert(5);
    s.insert(8);
    s.insert(3);
    cout<<s.count(3)<<endl;
    cout<<"The size of the set is "<<s.size()<<endl;
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;
}