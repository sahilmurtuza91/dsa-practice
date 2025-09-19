#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto to sum all the odd number: ";
    cin>>n;
    int sum=0;
    for(int i=0; i<=n; i++){
    if(i%2!=0)
    sum=sum+i;
    }
    cout<<"Sum of all the odd number upto "<<n<<" is "<<sum;
    return 0;
}