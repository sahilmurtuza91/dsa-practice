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
    // Helper function
    Node* ReverseNodesKGroup(Node* head,int k){
        Node* temp=head;
        int count=0;
        while(count<k){
            if(temp==NULL){
                return head;
            }
            temp=temp->Next;
            count++;
        }
        Node* prevnode=ReverseNodesKGroup(temp,k);

        temp=head;
        count=0;
        while(count<k){
            Node* nextnode=temp->Next;
            temp->Next=prevnode;

            prevnode=temp;
            temp=nextnode;
            count++;
        }
        return prevnode;
    }
    // Calling the Helper function to find the reverse of the k group
    void ReverseNodesKGroupWrapper(int k){
        head = ReverseNodesKGroup(head, k);
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
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printll();

    // ll.reverseLinkedList();
    // ll.printll();
    int k=6;
    ll.ReverseNodesKGroupWrapper(k);
    ll.printll();

    return 0;
}