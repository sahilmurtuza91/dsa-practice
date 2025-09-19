#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispalindrome(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());
    return s2==s;
    
}
void getallpartition(string s,vector<string>&partition, vector<vector<string>>&ans){
    if(s.size()==0){
        ans.push_back({partition});
        return;
    }
    for(int i=0; i<s.size(); i++){
        string part=s.substr(0,i+1);
        if(ispalindrome(part)){
            partition.push_back(part);
            getallpartition(s.substr(i+1),partition,ans);
            partition.pop_back();
        }
    }
}
vector<vector<string>>palindromepartition(string s){
    vector<string>partition;
    vector<vector<string>>ans;
    getallpartition(s,partition,ans);
    return ans;
}
int main(){
    string s="aab";
    vector<vector<string>>st=palindromepartition(s);
    for(vector<string>p:st){
        for(string i:p){
            cout<<i<<"  ";
        }cout<<endl;
    }
    return 0;
}