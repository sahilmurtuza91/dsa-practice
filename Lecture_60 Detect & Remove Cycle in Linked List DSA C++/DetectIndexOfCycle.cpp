#include<iostream>
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
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        /*
         if tail is not present in the linkedlist

         else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
        */

        // if tail is present in the linkedlist
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void detectIndexOfCycleInLinkedlist(){
        Node* slow=head;
        Node* fast=head;
        bool iscycle=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                iscycle=true;
                break;
            }
        }
        if(!iscycle){
            cout<<"No cycle is exist\n";
            return;
        }
        slow=head;
        int indx=0;
        
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
            indx++;
        }
        cout<<"first index of the cycle is: "<<indx<<endl;
    }
};
int main(){
    return 0;
}