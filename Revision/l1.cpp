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
        Node* newNod=new Node(val);
        if(head==NULL){
            head=tail=newNod;
            return;
        }
        else{
            newNod->Next=head;
            head=newNod;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
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
        Node* newNode=new Node(val);
        Node* temp=head;
        for(int i=0; i<pos-1; i++){
            if(temp==NULL){
                cout<<"Invalid Position\n";
                return;
            }
            temp=temp->Next;
        }
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
    void pop_last(){
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
        tail=temp;
    }
    void deleteMiddle(int pos){
        if(pos<0){
            cout<<"Invalid Position\n";
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
    void reverse(){
        if(head==NULL){
            cout<<"Empty ll\n";
            return;
        }
        if(head==tail){
            cout<<"it consist only one node so it's reverse id same\n";
            printll();
            return;
        }
        Node* curr=head;
        Node* nextNode=NULL;
        Node* prevNode=NULL;
        tail=head;
        while(curr!=NULL){
            nextNode=curr->Next;
            curr->Next=prevNode;
            prevNode=curr;
            curr=nextNode;
        }
        head=prevNode;
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
    int search(int key){
        if(head==NULL){
            cout<<"Empty \n";
            return 0;
        }
        int indx=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return indx;
            }
           temp= temp->Next;
           indx++;
        }
        return -1;
    }
};
int main(){
    list ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(5);
    ll.push_back(6);

    ll.printll();

    ll.reverse();
    ll.printll();

    ll.pop_front();

    ll.printll();

    ll.pop_last();

    ll.insertMiddle(2,40);
    ll.printll();

    ll.deleteMiddle(2);
    ll.printll();

    cout<<ll.search(3)<<endl;
    ll.printll();
    return 0;
}