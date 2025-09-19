#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
int FirstUnique(string str){
    unordered_map<char,int>m;
    queue<int>Q;
    for(int i=0; i<str.size(); i++){
        if(m.find(str[i])==m.end()){
            Q.push(i);
        }
        m[str[i]]++;
        while(Q.size()>0 && m[str[Q.front()]]>1){
            Q.pop();
        }
    }
    return Q.empty()?-1:Q.front();
}
int main(){
    string str="level";
    cout<<FirstUnique(str)<<endl;
    return 0;
}