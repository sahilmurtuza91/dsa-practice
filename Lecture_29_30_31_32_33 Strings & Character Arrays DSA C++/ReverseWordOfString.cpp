#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverseword(string s){
    int n=s.length();
    string ans="";
    reverse(s.begin(),s.end());
    for(int i=0; i<n; i++){
        string words="";
        while(i<n && s[i]!=' '){
            words=words+s[i];
            i++;
        }
        reverse(words.begin(),words.end());
        if(words.length()>0){
            ans=ans+" "+words;
        }
    }
    return ans.substr(1);
}
int main(){
    string sentence="my name is sahil";
    cout<<reverseword(sentence);
    return 0;
}