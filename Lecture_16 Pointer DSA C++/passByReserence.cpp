#include<iostream>
using namespace std;

// void changeA(int a){
//     a=20;
// }
// int main(){
//     int a=10;
//     changeA(a);
//     cout<<"Value of 'a': "<<a<<endl;  //// here the value will not chnage beacause of pass by value happen
//     return 0;
// }


// pass by reference
void changeA(int *a){       // here takin integer pointer becaue in the main function address is pass so 
                            //  to store the address of integere variavle we create integer pointer.

    *a=20;                  // dereferencing operator to overwrite the value to its previous value
}
int main(){
    int a=10;
    changeA(&a);                // here we pass the addres of 'a'
    cout<<"Value of 'a': "<<a<<endl;  // here the value is chnage 
    return 0;
    
}