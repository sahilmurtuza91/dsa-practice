#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
vector<vector<int>> sumpair(vector<int>num){
    int n=num.size();
    vector<vector<int>>ans;
    set<vector<int>>s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(num[i]+num[j]+num[k]==0){
                    vector<int>tri={num[i],num[j],num[k]};
                    sort(tri.begin(), tri.end());
                
                    if(s.find(tri)==s.end()){
                        s.insert(tri);
                        ans.push_back(tri);
                    }
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int>num={-1,0,1,2,-1,-4};
   vector<vector<int>> fans = sumpair(num);
    for (vector<int>& triplet : fans) {
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}