#include<iostream>
using namespace std;
class CircularQueue{
    int *arr;
    int currentsize,capacity,front,rear;
    public:
    CircularQueue(int size){
        capacity=size;
        arr=new int[capacity];
        front=-1;
        rear=-1;
        currentsize=0;
    }
    void push(int val){
        if(full()){
            cout<<"Queue is full\n";
            return;
        }
        else if(empty()){
            front=0;
            rear=(rear+1)%capacity;
            arr[rear]=val;
            currentsize++;
        }
        else{
            rear=(rear+1)%capacity;
            arr[rear]=val;
            currentsize++;
        }
    }
    void pop(){
        if(empty()){
            cout<<"Empty circular queue\n";
            return;
        }else{
            front=(front+1)%capacity;
            currentsize--;
        }
    }
    void frontval(){
        if(empty()){
            cout<<"Circular queue is empty\n";
            return;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }
    bool empty(){
        return currentsize==0;
    }
    bool full(){
        return currentsize==capacity;
    }
};
int main(){
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.frontval();
    cq.pop();
    cq.push(4);
    
    cq.push(5);
    while(!cq.empty()){
        cq.frontval();
        cq.pop();
    }
    return 0;
}