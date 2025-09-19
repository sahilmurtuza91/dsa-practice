// Implemantation of the queue using linkedlist...
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=tail=NULL;
    }
    void enqueue(int val){
        Node* newNode=new Node(val);
        if(empty()){
            head=tail=newNode;
            return;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void dequeue(){
        if(empty()){
            cout<<"Empty linked list"<<endl;
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }

    }
    void front(){
        if(empty()){
            cout<<"Empty linked list.."<<endl;
            return;
        }
        else{
            cout<<head->data;
        }
    }
    bool empty(){
        return head==NULL;
    }

};
int main(){
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    while(!q1.empty()){
        q1.front();
        cout<<" ";
        q1.dequeue();
    }
    return 0;
}