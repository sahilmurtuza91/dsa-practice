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
    Node* geter(){
        return head;
    }
// merge two sorted linkedlist
    Node* mergeNode(Node* ll,Node* ll2){
        if(ll==NULL || ll2==NULL){
            return ll==NULL?ll2:ll;
        }
        if(ll->data<=ll2->data){
            ll->Next=mergeNode(ll->Next,ll2);
            return ll;
        }
        else{
            ll2->Next=mergeNode(ll,ll2->Next);
            return ll2;
        }
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
    cout<<"First LinkedList\n";
    ll.push_front(4);
    ll.push_front(2);
    ll.push_front(1);
    ll.printll();

    cout<<endl;

    list ll2;\
    cout<<"Second LinkedList\n";
    ll2.push_front(5);
    ll2.push_front(3);
    ll2.push_front(1);
    ll2.printll();


    // Call the mergeNode.
    Node* merge=ll.mergeNode(ll.geter(),ll2.geter());
    Node* temp=merge;
    cout<<"\nMerge the two sorted linkedlist"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->Next;
    }cout<<"NULL"<<endl;
    return 0;
}