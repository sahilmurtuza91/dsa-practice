#include<iostream>
#include<map>
using namespace std;
int  main(){
    map<string,int>m;
    m["book"]=20;
    m["pen"]=15;
    m["pencile"]=34;
    cout<<m["book"]<<endl;
    for(auto i:m){
        cout<<i.first<<" => "<<i.second<<endl;
    }
    m.insert({"Eraser",25});
    m.emplace("Sharpner",23);
    cout<<m.count("pen")<<endl;
    cout<<"--------Key and value---------"<<endl;
     for(auto i:m){
        cout<<i.first<<" => "<<i.second<<endl;
    }
    m.erase("pen");
      cout<<"--------Key and value---------"<<endl;
     for(auto i:m){
        cout<<i.first<<" => "<<i.second<<endl;
    }
    return 0;
}