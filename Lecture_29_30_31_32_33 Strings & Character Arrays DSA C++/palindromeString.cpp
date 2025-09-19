#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isalphaNumeric(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='a')){
        return true;
    }
    return false;
}
bool palindrome(string s){
    int st=0; int end=s.length()-1;
    while(st<end){
        if(!isalphaNumeric(s[st])){
            st++;
            continue;
        }
        if(!isalphaNumeric(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string st="recer";
    palindrome(st);
}