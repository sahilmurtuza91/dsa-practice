#include<iostream>
using namespace std;
int main(){
    cout<<"-----:Bitwise AND Operator-----"<<endl;
    int n=4;
    int x=5;
    cout<<(x&n);

    /* code explanation
     5 = 0101
   & 4 = 0100
 ---------------
     = 0100 → 4
     */
    return 0;
}