#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class Doublylist{
    Node* head;
    Node* tail;
    public:
    Doublylist(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void push_back(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        else{
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"Empty Double linkedlist\n";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node*temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"Empty Doubly list\n";
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;

    }
    void pop_middle(int pos) {
    if (pos < 0) {
        cout << "Invalid Position\n";
        return;
    }
    if (head == NULL) {
        cout << "Empty list\n";
        return;
    }
    if (pos == 0) {
        pop_front();
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    Node* del = temp->next;
    if (del == NULL) { // position out of range
        cout << "Position out of range\n";
        return;
    }

    Node* nextD = del->next;

    // If deleting last node
    if (nextD == NULL) {
        tail = temp;
        temp->next = NULL;
    } else {
        temp->next = nextD;
        nextD->prev = temp;
    }

    del->next = NULL;
    del->prev = NULL;
    delete del;
}

    void printdll(){
            Node*temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" <--> ";
                temp=temp->next;
            }cout<<"NULL"<<endl;
        }
};
int main(){
    Doublylist dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);
    dll.printdll();
    dll.pop_back();
    dll.printdll();
    dll.pop_front();
    dll.printdll();
    return 0;
}