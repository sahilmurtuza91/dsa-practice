#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"\nGive th number of student ";
    cin>>a;
    int age[a];
    cout<<"Entre the age of the student"<<endl;
    for(int i=0; i<a; i++){
        cin>>age[i];
    }
    cout<<"Printing the age of the student is "<<endl;
    for(int i=0; i<a; i++){
        cout<<age[i]<<" ";
    }
    cout<<"\nFinding the largest age of the student: "<<endl;
    int max=age[0];
    for(int i=1; i<a; i++){
        if(max<age[i]){
            max=age[i];
        }
    }
    cout<<"The Maximum age is "<<max<<endl;
    return 0;
}