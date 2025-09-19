//  Find the Index of the First Occurrence in a String
#include<iostream>
using namespace std;
int index(string heystack,string needle){
    int n=heystack.size();
    int m=needle.size();
    if(m==0){
        return 0;
    }
    for(int i=0; i<n-m; i++){
        if(heystack.substr(i,m)==needle){
            return i;
        }
    }
    return -1;
}
int main(){
    string haystack = "sadbutsad", needle = "adb";
    cout<<index(haystack,needle);
    return 0;
}