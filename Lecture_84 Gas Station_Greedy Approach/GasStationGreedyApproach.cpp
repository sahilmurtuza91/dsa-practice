#include<iostream>
#include<vector>
using namespace std;
int canCompleteCircuit(vector<int>&gas, vector<int>&cost){
    int totalgas=0; int totalcost=0;
    for(int val:gas){
        totalgas=totalgas+val;
    }
    for(int val:cost){
        totalcost=totalcost+val;
    }
    if(totalgas<totalcost){
        return -1;
    }

    int start=0; int currentgas=0;
    for(int i=0; i<gas.size(); i++){
        currentgas=currentgas+gas[i]-cost[i];

        if(currentgas<0){
            start=i+1;
            currentgas=0;
        }
    }
    return start;
}
int main(){
    vector<int>gas={1,2,3,4,5};
    vector<int>cost={3,4,5,1,2};
    cout<<canCompleteCircuit(gas,cost)<<endl;
    return 0;
}