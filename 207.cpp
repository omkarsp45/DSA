// LL in C++

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(){
        head = nullptr;
    }

    void addLast(int element){
        if(!head){
            head = new Node(element);
        }
        else{
            Node* P = head;
            while(P->next){
                P = P->next;
            }
            P->next = new Node(element);
        }
    }

    void display(){
        Node* P = head;
        while(P){
            cout<<P->data<<"->";
            P = P->next;
        }
        cout<<"nullptr"<<endl;
    }
};

int main(){
    LinkedList LL;
    LL.addLast(5);
    LL.addLast(7);
    LL.addLast(2);
    LL.addLast(9);
    LL.addLast(1);
    LL.display();
    return 0;
}