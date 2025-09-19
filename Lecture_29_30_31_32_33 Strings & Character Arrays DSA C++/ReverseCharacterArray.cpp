#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<char>&s){
    int st=0;
    int end=s.size()-1;

    while(st<=end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
}
int main(){
    vector<char>vec={'s','a','h','i','l'};
    for(char c:vec){
        cout<<c<<" ";
    }cout<<endl;
    reverse(vec);
    cout<<"reverse"<<endl;
        for(char c:vec){
        cout<<c<<" ";
    }cout<<endl;

}