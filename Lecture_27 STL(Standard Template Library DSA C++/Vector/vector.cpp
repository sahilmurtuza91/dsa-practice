#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4};
    cout<<*(vec.begin())<<endl;
    vec.insert((vec.begin()+2),100);
    for(auto i=vec.begin(); i!=vec.end(); i++){ // this is forward loop
        cout<<*(i)<<" ";
    }
    cout<<endl;
    vec.erase(vec.begin()+2);
        for(auto i=vec.begin(); i!=vec.end(); i++){
        cout<<*(i)<<" ";
    }

    vec.insert(vec.begin()+3,200);

    for(auto i=vec.rbegin(); i!=vec.rend(); i++){  // This is the backward loop
        cout<<*(i)<<" ";
    }
    cout<<endl;

    // if we dont use auto the we do 
    vector<int>::iterator i;
    for(i=vec.begin(); i!=vec.end(); i++){
        cout<<*(i)<<"       ";
    }cout<<endl;

    // Another way to use 
    for(vector<int>:: reverse_iterator it=vec.rbegin(); it!=vec.rend(); it++){
          cout<<*(it)<<"        ";  
    }cout<<endl;

    // Another way 
     
    for(vector<int>::iterator i=vec.begin(); i!=vec.end(); i++){
        cout<<*(i)<<"       ";
    }cout<<endl;

    vec.clear();
    cout<<vec.size();
    return 0;
}