#include<iostream>
#include<VECTOR>
using namespace std;

string longestPrefix(vector<string> strs){
    if(strs.empty()){
        return "";
    }
    for(int i=0; i<strs[0].size(); i++){
        char ch=strs[0][i];
        cout<<ch<<endl;
        
        for(int j=1; j<strs.size(); j++){
            if(i>=strs[j][i] || tolower(ch)!=tolower(strs[j][i])){
                return strs[0].substr(0,i);
            }
        }
    }
    return strs[0];
}

int main(){
    vector<string>strs={"flower","Fly","flight"};
    cout<<longestPrefix(strs);
    return 0;
}