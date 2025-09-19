#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class LRUCatch{
    public:
    class Node{
        public:
        int key,val;
        Node* next;
        Node* prev;
        Node(int k,int v){
            key=k;
            val=v;
            prev=next=NULL;
        }
    };
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);

    unordered_map<int,Node*>m;
    int limit;

    void addNode(Node* newNode){
        Node* temp=head->next;
        head->next=newNode;
        temp->prev=newNode;
        newNode->next=temp;
        newNode->prev=head;
    }

    void  delNode(Node* oldNode){
        Node* tempnext=oldNode->next;
        Node* tempprev=oldNode->prev;

        tempnext->prev=tempprev;
        tempprev->next=tempnext;
    }

    LRUCatch(int capacity){
        limit=capacity;
        head->next=tail;
        tail->prev=head;
    }

    int get(int key){
        if(m.find(key)==m.end()){
            return -1;
        }
        Node* temp=m[key];

        int ans=temp->val;
        m.erase(key);
        delNode(temp);

        addNode(temp);
        m[key]=temp;
        return ans;
    }

    void put(int key , int val){
        if(m.find(key)!=m.end()){
            Node* temp=m[key];
            delNode(temp);
            m.erase(key);
        }

        if(m.size()==limit){
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }

        Node* newNode=new Node(key,val);
        addNode(newNode);
        m[key]=newNode;
    }
};
int main(){
    LRUCatch obj=LRUCatch(2);
    obj.put(1,1);
    obj.put(2,10);
    cout<<obj.get(3)<<endl;
    cout<<obj.get(2)<<endl;
    return 0;
}