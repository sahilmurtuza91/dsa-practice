#include<iostream>
#include<string>
using namespace std;
string removeOccurancepart(string s, string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string st="daabcbaabcbc";
    string part="abc";
    cout<<removeOccurancepart(st,part);
    return 0;
}