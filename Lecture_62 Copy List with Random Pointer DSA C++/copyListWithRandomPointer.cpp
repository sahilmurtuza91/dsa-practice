#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for a Node
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
class list {
public:
    Node* copyRandomlist(Node* head){
        if(head==NULL){
            return NULL;
        }
        Node* newhead=new Node(head->val);
        Node* oldtemp=head->next;
        Node* newtemp=newhead;
        unordered_map<Node*,Node*>m;
        m[head]=newhead;

        //Step 1: Copy rest of the nodes (next pointers only)
        while(oldtemp!=NULL){
            Node* copylist=new Node(oldtemp->val);
            m[oldtemp]=copylist;
            newtemp->next=copylist;
            newtemp=newtemp->next;
            oldtemp=oldtemp->next;
        }
        // Step 2: Assign random pointers
        oldtemp=head;
        newtemp=newhead;
        while(oldtemp!=NULL){
            newtemp->random=m[oldtemp->random];
            newtemp=newtemp->next;
            oldtemp=oldtemp->next;
        }
        return newhead;
    }
};

// Utility function to print a linked list with random pointers
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Val: " << temp->val << ", ";
        if (temp->random)
            cout << "Random: " << temp->random->val;
        else
            cout << "Random: NULL";
        cout << endl;
        temp = temp->next;
    }
    cout << "------------------" << endl;
}

int main() {
    // Create original nodes
    Node* n1 = new Node(7);
    Node* n2 = new Node(13);
    Node* n3 = new Node(11);
    Node* n4=new Node(15);

    // Connect next pointers
    n1->next = n2;
    n2->next = n3;
    n3->next=n4;

    // Connect random pointers
    n1->random = NULL;
    n2->random = n1;
    n3->random = n3;
    n4->random=n1;

    cout << "Original List:" << endl;
    printList(n1);

    // Call list
    list s;
    Node* copied = s.copyRandomlist(n1);

    cout << "Copied List:" << endl;
    printList(copied);

    return 0;
}
