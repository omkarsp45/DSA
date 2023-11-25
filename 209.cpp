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
        Node* newNode = new Node(element);
        if(!head){
            head = newNode;
            head->next = head;
        }
        else{
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }
    void display(){
        Node* P = head;
        do{
            cout<<P->data<<"->";
            P = P->next;
        }while(P!=head);
        cout<<"nullptr"<<endl;
    }
    bool isLoop(){
        Node* A = head;
        Node* B = head;
        if(!head){
            return false;
        }
        if(!head->next){
            return false;
        }
        while(A&&B){
            A = A->next;
            B = B->next;
            if(B){
               B = B->next; 
            }
            if(A==B){
                return true;
            }
        }
        return false;
    }
};

int main(){
    LinkedList l;
    l.addLast(4);
    l.addLast(3);
    l.addLast(9);
    l.addLast(1);
    l.addLast(7);
    l.display();
    if(l.isLoop()){
        cout<<"Yes ll is loop";
    }
    else{
        cout<<"No ll is not loop";
    }
    return 0;
}