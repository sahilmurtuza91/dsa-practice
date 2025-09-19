#include<iostream>
#include<list>
using namespace std;
class stack{
    list<int>ll;
    public:
    void push(int val){
        ll.push_back(val);
    }
    void pop(){
        ll.pop_back();
    }
    int top(){
        return ll.back();
    }
    bool empty(){
        return ll.size()==0;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}