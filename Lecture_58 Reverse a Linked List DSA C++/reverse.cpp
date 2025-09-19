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

    void pop_front(){

        if(head==NULL){
            cout<<"Empty ll\n";
            return;
        }

        Node* temp=head;
        head=head->Next;
        temp->Next=NULL;
        delete temp;
    }

    void deleteMiddle(int pos){

        if(head==NULL){
            cout<<"Empty ll\n";
            return;
        }

        if(pos==0){
            pop_front();
            return;
        }

        Node* temp=head;
        for(int i=0; i<pos-1&& temp->Next!=NULL; i++){

            temp=temp->Next;
        }

        if(temp->Next==NULL){
            cout<<"Invalid Position\n";
            return;
        }

        Node* pre=temp->Next;
        temp->Next=pre->Next;

        if(pre==tail){
            tail=temp;
        }
        
        pre->Next=NULL;
        delete pre;
    }

    void pop_back(){

        if(head==NULL){
            cout<<"Empty ll\n";
            return;
        }
        
        
        // This will use if tail is present in the linkedlist
        /*
        if(head==taile){
        delete head;
        head=tail=NULL;
        return;
        }
        Node* temp=head;
        while(temp->Next!=tail){
            temp=temp->Next;
        }
        temp->Next=NULL;
        delete tail;
        tail=temp;
        */

        // This will use when tail is not present;

        Node* temp=head;

        if(temp->Next==NULL){
            delete temp;
            head=tail=NULL;
            return;
        }

        while(temp->Next->Next!=NULL){
            temp=temp->Next;
        }

        Node* last=temp->Next;
        temp->Next=NULL;
        delete last;
        tail=temp;

    }
    
    // Reverse LinkedList
    void reverseLinkedList(){
        if(head==NULL){
            cout<<"Empty linkedlist\n";
            return;
        }
        if(head==tail){
            cout<<"Only one node is present. so that Reverse is same \n";
            return;
        }
        Node*current=head;
        Node* prev=NULL;
        Node* next=NULL;
        while(current!=NULL){
            next=current->Next;
            current->Next=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
    int search(int key){
        int index=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return index;
            }
            temp=temp->Next;
            index++;
        }
        return -1;
    }
    void printll(){

        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->Next;
        }cout<<"NUll"<<endl;
    }
};
int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printll();
    // ll.insertMiddle(5,1);
    // cout<<ll.search(1)<<endl;;
    // ll.push_back(4);
    // ll.pop_front();
    // ll.pop_back();

    ll.reverseLinkedList();
    ll.printll();

    return 0;
}