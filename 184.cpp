#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node* next;    
};

void addLast(Node *P , int e){
    while(P->next!=nullptr){
        P=P->next;
    }
    Node * temp;
    temp = new Node;
    P->next = temp;
    temp->data=e;
    temp->next = nullptr;
}

void bringFirst(Node * &P , int element){
    Node* temp;
    temp = P;
    Node* Q = new Node; 
    while(temp->data!=element){
        Q = temp;
        temp=temp->next;
    }
    Q->next = temp->next;
    temp->next = P;
    P = temp;
}

void display(Node *P){
    if(P==nullptr){
        cout<<endl;
        return; 
    }
    else{
        cout<<P->data<<" "; 
        display(P->next);
    }
}

void insertAfter(Node *P ,int reference , int element){
    while(P->data!=reference){
        P = P->next;
        if(P==nullptr){
            return;
        }
    }
    Node *temp = new Node;
    temp->data=element;
    temp->next = P->next;
    P->next = temp;
}

int main(){
    Node * head = new Node; 
    head->data = 5;
    head->next = nullptr;
    addLast(head , 7);
    addLast(head , 9);
    addLast(head , 2);
    addLast(head , 13);
    display(head);
    bringFirst(head , 2);
    display(head);
    insertAfter(head , 9876 , 45);
    display(head);
    addLast(head , 23);
    display(head);
    return 0;
}