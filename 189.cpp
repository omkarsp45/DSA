// Deleting element from ll

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

void deleteE(Node* &P , int index){
    if(index<0){
        cout<<"Invalid Index"<<endl;
        return;
    }
    else if(index==0){
        Node* temp = P;
        P = P->next;
        return;
    }
    else{
        Node* temp;
        Node* previous = nullptr;     //Deleting all elements before given index 
        for (int i = 0; i < index; i++) {
            previous = P;
            P = P->next;
        }
        if (P == nullptr) {
            cout << "Invalid Index" << endl;
            return;
        }
        previous->next = P->next;
    } 
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
    deleteE(head,3);
    display(head);
    deleteE(head,0);
    display(head); 
    return 0;
}