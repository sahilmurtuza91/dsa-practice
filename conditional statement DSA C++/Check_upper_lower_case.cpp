#include<iostream>
using namespace std;
int main(){
    char alp='A';
    char alp1='Z';
    char salp='a';
    char salp1='z';
    int nalp=alp;
    int nalp1=alp1;
    int nsalp=int(salp);
    int nsalp1=int(salp1);
    cout<<"ASCII value of "<<alp<<" "<<nalp<<endl;
    cout<<"ASCII value of "<<alp1<<" "<<nalp1<<endl;
    cout<<"ASCII value of "<<salp<<" "<<nsalp<<endl;
    cout<<"ASCII value of "<<salp1<<" "<<nsalp1<<endl;
    char useralp;
    cout<<"Entre the charactere to check wheather the character is upper case or lower case: ";
    cin>>useralp;
    int nuuseralp=useralp;
    if(nuuseralp>=65 &&  nuuseralp<=90){
        cout<<"The given character is Upper case: "<<useralp;
    }
    else if(nuuseralp>=97 && nuuseralp<=122){
        cout<<"The given alpahbet is lower case: "<<useralp;
    }
    else{
        cout<<"The given symbol is not the charactre to determine wheather it is upper case or lower case";
    }
    return 0;

}