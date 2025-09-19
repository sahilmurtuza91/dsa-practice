#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec; // only creation but no value will be assign
    // cout<<vec[0];  // this will not return any value or return 0 becaue during initilization of the vector no value will assign to it

    /*Accessing an element (vec[0]) in an empty vector is not safe.
    It doesn't throw an error, but it leads to undefined behavior.*/


    // Another way to initilize the Vector
    vector<int>vec1={1,2,3};  // here vector creationand also assigning the value to the vector
    cout<<vec1[0]<<endl;
    

    // Another way to initialize the vector
    vector<int>vec2(3,0);
    cout<<vec2[0]<<endl;
    cout<<vec2[1]<<endl;
    cout<<vec2[2]<<endl;
   

    // for each loop
    vector<char>vec3={'a','b','c','d','e'};
    for(char val:vec3){
        cout<<val<<" ";
    }

    
    return 0;
}