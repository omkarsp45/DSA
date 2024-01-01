// Queue using Linked List 

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class Queue{
    private:
    Node* front;
    Node* rear;
    public:
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int data){
        Node* N = new Node(data);
        if(N==nullptr){
            cout<<"Queue Overflow"<<endl;
        }
        else{
            if(front==nullptr){
                front = N;
                rear = N;
            }
            else{
                rear->next = N;
                rear = N;
            }
        }
    }

    int dequeue(){
        int x = -1;
        Node* dummy;
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
        }
        else{
            dummy = front;
            front = front->next;
            x = dummy->data;
            delete dummy;
        }
        return x;
    }

    bool isEmpty(){
        if(front==nullptr){
            return true;
        }
        return false;
    }

    void display(){
    Node* p = front;
    while (p){
        cout<<p->data<<flush;
        p = p->next;
        if (p != nullptr){
            cout<<"<-"<<flush;
        }
    }
    cout<<endl;
}
};

int main(){
    Queue Q;
    Q.enqueue(4);
    Q.enqueue(3);
    Q.enqueue(7);
    Q.enqueue(2);
    Q.display();
    Q.dequeue();
    Q.dequeue();
    Q.display();
    Q.dequeue();
    Q.display();
    Q.enqueue(5);
    Q.enqueue(7);
    Q.enqueue(0);
    Q.display();
    return 0;
}