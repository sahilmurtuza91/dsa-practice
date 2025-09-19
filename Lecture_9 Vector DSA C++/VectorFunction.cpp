#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1;
    cout<<"Size of vec1 "<<vec1.size()<<endl;

    vector<int>vec={1,2,3,4,5};
    cout<<"Size of vec "<<vec.size()<<endl;
    cout<<"Printing the vector element"<<endl;
    for(int x: vec){
        cout<<x<<" ";
    }
    
    // Adding an element at last  push_back
    cout<<"\nAdding an element to the vector by using push_back "<<endl;
    vec.push_back(20);
    cout<<"Size of vec "<<vec.size()<<endl;
    cout<<"Printing the vector element"<<endl;
    for(int x: vec){
        cout<<x<<" ";
    }

    // Removing last element pop_back
    cout<<"\nRemoving an elemet by using pop_back "<<endl;
    vec.pop_back();
    cout<<"Size of vec "<<vec.size()<<endl;
    cout<<"Printing the vector element"<<endl;
    for(int x: vec){
        cout<<x<<" ";
    }


    // display the first element of vector
    cout<<"\nThe first element of the vector vec is "<<vec.front()<<endl;


    // display the last element of vector
    cout<<"The last element of the vector vec is "<<vec.back()<<endl;


    // displaying the elemennt of the vector by usinf its index via (at) we can normally acces the elemet just like array

    cout<<"The element of the vector vec at index "<<2<<" is "<<vec.at(2)<<endl;

    // Normal way
    cout<<"The element of the vector vec at index "<<2<<" is "<<vec[2]<<" by the normal method just like array"<<endl;
    return 0;
}