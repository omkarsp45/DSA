// Doubly Linked List 

#include<iostream>
using namespace std;

class Node{
    public:
    int data ; 
    Node* next;
    Node* prev;
    Node(int element){
        data = element;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLL{
    private:
    Node* head;
    public:
    DoublyLL(){
        head = nullptr;
    }

    void addLast(int val){
        Node* newNode = new Node(val);
        if(!head){
            head = newNode;
        }
        else{
            Node* temp = head;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"nullptr"<<endl;
    }
    
    void reverseLL(){
        Node* P = head;
        Node* temp = nullptr;
        while(P){
            temp = P->prev;
            P->prev = P->next;
            P->next = temp;
            P = P->prev;
            if(temp){
                head = temp->prev;
            }
        }
        
    }

};

int main(){
    DoublyLL ll;
    ll.addLast(3);
    ll.addLast(7);
    ll.addLast(1);
    ll.addLast(9);
    ll.addLast(5);
    ll.addLast(6);
    ll.display();
    ll.reverseLL();
    ll.display();
    return 0;
}