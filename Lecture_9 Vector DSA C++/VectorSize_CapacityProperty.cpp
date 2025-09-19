#include<iostream>
#include<vector>
using namespace std;
int main(){
    // In the case of Vector if the internal memory is full then if we add more element then it necome double to is previous memory

    vector<int>vec; // initially ih has zero memory
    vec.push_back(17);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // now the memory is full if we add new elemet then it become twice to previous 
    vec.push_back(29);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // Now the memory is full if we add new elemet then it become twice to previous 
    vec.push_back(14);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // Now the memory is full if we add new elemet then it become twice to previous 
    vec.push_back(7);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // Now the memory is full if we add new elemet then it become twice to previous 
    vec.push_back(3);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // Now the memory is full if we add new elemet then it become twice to previous 
    vec.push_back(9);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // Now the memory is full if we add new elemet then it become twice to previous 
    vec.push_back(33);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // Now the memory is full if we add new elemet then it become twice to previous 
    vec.push_back(57);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // Now the memory is full if we add new elemet then it become twice to previous 
    vec.push_back(75);
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // printing the element of the vector
    cout<<"Element of the vector is "<<endl;
    for(int x:vec){
        cout<<x<<"          ";
    }cout<<endl;

    // Now we are going to delete an element from the vector to check wheather its capacity will change or not
    cout<<"Now we are going to delete an element from the vector to check wheather its capacity will change or not"<<endl;
    vec.pop_back();
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // printing the element of the vector
    cout<<"Element of the vector is "<<endl;
    for(int x:vec){
        cout<<x<<"          ";
    }cout<<endl;

    //Again deleting the element
    cout<<"Again deleting an element to check its capacity will chnage or not "<<endl;
    vec.pop_back();
    cout<<"Size of the vector vec is "<<vec.size()<<endl;
    cout<<"The Capacity of the vector vec is "<<vec.capacity()<<endl;

    // printing the element of the vector
    cout<<"Element of the vector is "<<endl;
    for(int x:vec){
        cout<<x<<"          ";
    }cout<<endl;

    return 0;
}