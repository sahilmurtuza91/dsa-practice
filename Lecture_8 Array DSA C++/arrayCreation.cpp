#include<iostream>
using namespace std;
int main(){
    int marks[]={67,56,69,79,98};
    int size=sizeof(marks)/sizeof(int);
    cout<<"Size of an array is "<<size<<endl;
    // printing the value of array
    for(int i=0; i<size; i++){
        cout<<marks[i]<<" ";
    }

    // user gives the input to another array
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
    return 0;
}