#include<iostream>
using namespace std;
void countNUmber(){
    static int count=0;
    count++;
    cout<<"Count:-->  "<<count<<endl;;
}
int main(){
    countNUmber();  // 1
    countNUmber();  // 2
    countNUmber();  // 3
    countNUmber();  // 4
    return 0;
}