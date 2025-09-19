#include<iostream>
using namespace std;
const int maxSize=5;
int arr[maxSize];
int temp=-1;
class stack{
    public:
    void push(int val){
        temp++;
        if(temp<maxSize){
        arr[temp]=val;
        }
    }
    void pop(){
        if(temp>=0){
           temp--; 
        }
    }
    int top(){
        if(temp>=0){
            return arr[temp];
        }
    }
    bool empty(){
        return sizeof(arr)/sizeof(int)==-1;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.empty();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    return 0;
}