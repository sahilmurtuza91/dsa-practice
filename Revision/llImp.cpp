#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node(int val){
        data=val;
        Next=NULL;
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
    void insertMiddle(int pos,int val){
        if(pos<0){
            cout<<"Invalid position\n";
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
        if(head==tail){
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
        tail=temp;;
    }
    int search(int key){
        int indx=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return indx;
            }
            indx++;
            temp=temp->Next;
        }
        return -1;
    }
    void printll(){
        if(head==NULL){
            cout<<"Empty ll\n";
            return;
        }
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->Next;
        }cout<<"NULL"<<endl;
    }
};
int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.printll();
    ll.push_back(3);
    ll.push_back(4);
    ll.printll();
    ll.deleteMiddle(1);
    ll.printll();
    // ll.pop_front();
    // ll.printll();
    // ll.pop_back();
    // ll.printll();
    cout<<ll.search(4)<<endl;
    cout<<ll.search(3)<<endl;
    return 0;
}