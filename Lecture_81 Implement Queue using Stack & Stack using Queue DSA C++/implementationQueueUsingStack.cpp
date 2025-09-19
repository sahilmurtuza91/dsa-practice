// Implementation of Queue using stack.
#include<iostream>
#include<stack>
using namespace std;
class QueueUisngStack{
    stack<int>s1;
    stack<int>s2;
    public:
    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop(){
        int ans=s1.top();
        s1.pop();
        return ans;    
    }
    int peek(){
        return s1.top();
    }
    bool empty(){
        return s1.empty();
    }
};
int main(){
    QueueUisngStack q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while(!q.empty()){
        cout<<q.pop()<<" ";
    }cout<<endl;
    return 0;
}