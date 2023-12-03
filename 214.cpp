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
    
    void addAfter(int ref, int val) {
        Node* newNode = new Node(val);
        Node* temp = head;
        while (temp->data != ref) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        if (temp->next) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteElement(int val){
        Node* temp = head;
        if(temp->data==val){
            head = head->next;
            head->prev = nullptr;
            return;
        }
        while(temp->data!=val){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
    }
    int showPrev(int val){
        return head->prev->data;
    }
};

int main(){
    DoublyLL l;
    l.addLast(3);
    l.addLast(7);
    l.addLast(5);
    l.addLast(9);
    // l.deleteElement(3);
    l.display();
    return 0;
}