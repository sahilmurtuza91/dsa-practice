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
class circularList{
    Node* head;
    Node* tail;
    public:
    circularList(){
        head=tail=NULL;
    }
    void insert_begin(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
    }
    void insert_last(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
            tail->next=head;
        }
    }
    void delete_begning(){
        if(head==NULL){
            cout<<"Empty c-list\n";
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
    }
    void delete_last(){
        if(head==NULL){
            cout<<"Empty c-list\n";
            return;
        }
        else if(head==tail){
            delete tail;
            head=tail=NULL;
            return;
        }
        else{
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            tail=temp;
            Node*del=temp->next;
            tail->next=head;
            delete del;


        }
    }
    void printcll(){
        if(head==NULL){
            cout<<"Empty c-list\n";
            return;
        }
        cout<<head->data<<"->";
        Node* temp=head->next;
        do{
            cout<<temp->data<<"->";
            temp=temp->next;
        }while(temp!=head);
        if(head!=tail){
            cout<<head->data<<"(Back to head)"<<endl;
        }
    }
    
};
int main(){
    circularList cll;
    // cll.insert_begin(1);
    // cll.insert_begin(2);
    // cll.insert_begin(3);

    cll.insert_last(1);
    cll.insert_last(2);
    cll.insert_last(3);

    // cll.delete_begning();
    cll.delete_last();
    cll.printcll();
    return 0;
}