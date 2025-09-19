#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int, int>p={3,4};
    cout<<p.first<<" "<<p.second<<endl;

    pair<char,int>p1={'s',78};
    cout<<p1.first<<" "<<p.second<<endl;

    pair<int,pair<char, int>>pp1={1,{'s',78}};
    cout<<pp1.first<<" "<<pp1.second.first<<" "<<pp1.second.second<<endl;

    vector<pair<int,int>>vec={{1,2},{3,4},{4,5},{8,9}};
    for(auto i:vec){
            cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
}