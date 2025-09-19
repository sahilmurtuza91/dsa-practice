#include<iostream>
#include<stack>
using namespace std;
class minstack{
     stack<pair<int,int>>s;
     public:
     void push(int val){
          if(s.empty()){
               s.push({val,val});
          }
          else{
               int minval=min(val,s.top().second);
               s.push({val,minval});
          }
     }
     void pop(){
          s.pop();
     }
     int top(){
          return s.top().first;
     }
     int getmin(){
          return s.top().second;
     }
};
int main(){
     minstack obj=minstack();
     obj.push(-2);
     obj.push(0);
     obj.push(-3);
     cout<<obj.getmin();
     return 0;
}