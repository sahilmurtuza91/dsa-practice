#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;  // Declares a pointer that points to a Node object.

    Node(int val){
        data=val;
        Next=NULL;
    }
};

class list{
    Node* head;     // This is a pointer to the first node of the linked list.
    Node* tail;     // This is a pointer to the last node of the linked list.

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
            newNode->Next=head;
            head=newNode;
        }
    }

    void push_back(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->Next=newNode;
            tail=newNode;
        }
    }

    void insertMiddle(int val,int pos){

        if(pos<0){
            cout<<"Invalid Position\n";
            return;
        }
        if(pos==0){
            push_front(val);
            return;
        }

        Node* temp=head;

        for(int i=0; i<pos-1; i++){

            if(temp==NULL){
                cout<<"Invalid position\n";
                return;
            }
            temp=temp->Next;
        }

        Node* newNode=new Node(val);
        newNode->Next=temp->Next;
        temp->Next=newNode;
    }
    void middleElemet(){
        if(head==NULL){
            cout<<"Empty ll\n";
            return;
        }
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->Next!=NULL){
            slow=slow->Next;
            fast=fast->Next->Next;
        }
        cout<<"Midd Element is: "<<slow->data<<endl;
    }
};
int main(){
    list ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.middleElemet();
    return 0;
}