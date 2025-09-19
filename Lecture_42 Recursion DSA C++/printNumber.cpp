#include<iostream>
using namespace std;
void printNumber(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<",";
    printNumber(n-1);
}
int main(){
    printNumber(5);
    return 0;
}