#include<iostream>
using namespace std;
int main(){
    cout<<"int = "<<sizeof(int)<<endl;
    cout<<"long = "<<sizeof(long)<<endl;
    cout<<"long int = "<<sizeof(long int)<<endl;
    cout<<"chra = "<<sizeof(char)<<endl;
    cout<<"short = "<<sizeof(short)<<endl;
    cout<<"short int = "<<sizeof(short int)<<endl;
    cout<<"long long = "<<sizeof(long long)<<endl;
    cout<<"long long int = "<<sizeof(long long int)<<endl;
    cout<<"signed = "<<sizeof(signed)<<endl;
    cout<<"signed int = "<<sizeof(signed int)<<endl;
    cout<<"unsigned = "<<sizeof(unsigned)<<endl;
    cout<<"unsigned int = "<<sizeof(unsigned int)<<endl;  // unsigned will not store the negative value; 
    unsigned a=-10;
    unsigned b=10;
    cout<<"a= "<<a<<endl;   // here it will give the wrong answer becaue unsigned will not store the negative value
    cout<<"b= "<<b<<endl;
    return 0;
}