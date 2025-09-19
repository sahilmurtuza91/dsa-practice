#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int comparaceword(vector<char>chars){
    int n=chars.size();
    int idx=0;
    for(int i=0; i<n; i++){
        char ch=chars[i];
        int count=0;
        while(i<n && ch==chars[i]){
            count++;
            i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }
        else{
            chars[idx++]=ch;
            string num=to_string(count);
            for(char digit:num){
                chars[idx++]=digit;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}
int main(){
    vector<char> vec={'a','a','a','b','b','c','c','d','f'};
    int newLength =comparaceword(vec);  // call function

    cout << "Compressed vector: ";
    for (char ch : vec) {
        cout << ch << " ";
    }
    cout << "\nLength: " << newLength << endl;
    return 0;
}