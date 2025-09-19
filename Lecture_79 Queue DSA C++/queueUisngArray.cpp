#include<iostream>
using namespace std;
const int maxSize=5;
class queue{
    int arr[maxSize];
    int front;
    int back;
public:
    queue(){
        front=-1;
        back=-1;
    }
   void push(int val){
    if(full()){
        cout<<"queue is full";
        return;
    }
    else if(empty()){
        arr[++back]=val;
        front=0;
    }
    else{
        arr[++back]=val;
    }
   }
   void pop(){
    if(empty()){
        cout<<"Empty queue \n";
        return;
    }
    else if(front==back){
        front=back=-1;
    }
    else{
        front++;
    }

   } 
   void frontval(){
    if(empty()){
        cout<<"empty queue";
        return;
    }else{
        cout<<arr[front]<<endl;
    }
   }
   bool empty(){
    return front==-1;
   }
   bool full(){
    return back==maxSize-1;
   }
};
int main(){
queue q;
q.push(2);
q.push(3);
q.frontval();
q.pop();
q.frontval();
return 0;
}