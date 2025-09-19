#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>num){
    int n= num.size();
    int fre=0;
    int ans=0;
    for(int i=0; i<n; i++){
        if(fre==0){
            ans=num[i];
        }
        if(ans==num[i]){
                fre++;
        }
        else{
            fre--;
        }
    }
    fre=0;
    for(int i=0; i<n; i++){
        if(ans==num[i]){
            fre++;
        }
    }
    if(fre>n/2){
         return ans;
    }
    else{
        return -1;
    }
   
}
int main(){
    vector<int>nec={9,2,9,1,4,1,4,3,4,2,4,4,2,7,4,4,};
    int result = majorityelement(nec);
    if(result != -1) {
        cout << "The majority element is " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}