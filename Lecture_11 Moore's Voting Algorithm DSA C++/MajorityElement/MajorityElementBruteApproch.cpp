#include<iostream>
#include<vector>
using namespace std;
vector<int> majorityElement(vector<int>num){
    int n=num.size();
    for(int each:num){
        int fre=0;
        for(int el:num){
            if(each==el){
                fre++;
            }
        }
        if(fre>n/2){
            cout<<each<<endl;
            return{};
        }
    }
}
int main(){
    vector<int>vec={1,2,2,1,2};
    majorityElement(vec);
}