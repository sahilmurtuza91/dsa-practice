#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<char, int>roman={
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    string s;
    cout<<"Enter the roman Numbar: ";
    cin>>s;
    int target=0;
    for(int i=0; i<s.length(); i++){
        if(i+1<s.length() && roman[s[i]]<roman[s[i+1]]){
            target=target-roman[s[i]];
        }
        else{
            target=target+roman[s[i]];
        }
    }
    cout<<"Roman Number => "<<s<<" Integer => "<<target<<endl;
    return 0;
}
