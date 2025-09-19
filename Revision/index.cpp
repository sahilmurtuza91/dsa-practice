#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispalindrom(string part){
    string s=part;
    reverse(s.begin(),s.end());
    return s==part;
}
void getall(string s, vector<vector<string>>&ans,vector<string>&pair){
    if(s.size()==0){
        ans.push_back(pair);
        return;
    }
    for(int i=0; i<s.size(); i++){
        string part=s.substr(0,i+1);

        if(ispalindrom(part)){
            pair.push_back(part);
            getall(s.substr(i+1),ans,pair);
            pair.pop_back();
        }
    }
}
vector<vector<string>>get(string s){
    vector<string>pair;
    vector<vector<string>>ans;
    getall(s,ans,pair);
    return ans;
}
int main(){
    string s="aab";
    vector<vector<string>>fans=get(s);
    for(vector<string>i:fans){
        for(string j:i){
            cout<<j<<" ";
        }cout<<endl;
        
    }
    return 0;
}