// Implementation of Stack using queue required teo queue
#include<iostream>
#include<queue> 
using namespace std;
class stackUsingQueue{
   public:
    queue<int>q1;
    queue<int>q2;
   stackUsingQueue(){

   }
   void push(int x){
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
   }
   int pop(){
    int ans=q1.front();
    q1.pop();
    return ans;
   }
   int top(){
    return q1.front();
   }
   bool empty(){
    return q1.empty();
   }
};
int main(){
    stackUsingQueue s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.pop()<<" ";
        
    }
    return 0;
}