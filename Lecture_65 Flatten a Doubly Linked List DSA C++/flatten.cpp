#include <iostream>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) {
        val = _val;
        prev = next = child = NULL;
    }
    
};

class flist{
    public:
    Node*flatten(Node* head){
        Node*curr=head;
        if(head==NULL){
            cout<<"Empty\n";
            return head;
        }
        while(curr!=NULL){
            if(curr->child!=NULL){
                Node* nextnode=curr->next;
                curr->next=flatten(curr->child);

                curr->next->prev=curr;
                curr->child=NULL;

                while(curr->next!=NULL){
                    curr=curr->next;
                }
                if(nextnode!=NULL){
                    curr->next=nextnode;
                    nextnode->prev=curr;
                }
            }
            curr=curr->next;
        }
        return head;
    }
};

// Helper: print list
void printList(Node* head) {
    Node* curr = head;
    while(curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Driver code
int main() {
    // Create nodes
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);
    Node* n8 = new Node(8);
    Node* n9 = new Node(9);
    Node* n10 = new Node(10);
    Node* n11 = new Node(11);
    Node* n12 = new Node(12);

    // Link main level
    n1->next = n2; n2->prev = n1;
    n2->next = n3; n3->prev = n2;
    n3->next = n4; n4->prev = n3;
    n4->next = n5; n5->prev = n4;
    n5->next = n6; n6->prev = n5;

    // Link child 3 -> 7
    n3->child = n7;

    // Child list 7-8-9-10
    n7->next = n8; n8->prev = n7;
    n8->next = n9; n9->prev = n8;
    n9->next = n10; n10->prev = n9;

    // Child list 8 -> 11
    n8->child = n11;

    // Child list 11-12
    n11->next = n12; n12->prev = n11;
    flist f1;
    Node* headnode=f1.flatten(n1);
    printList(headnode);
   

    return 0;
}
