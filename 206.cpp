// check loop in LL 

#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;
};

void addLast(Node* &P , int element){
    if(!P){
        P = new Node;
        P->data = element;
        P->next = nullptr;
    }
    else{
        Node* temp = P;
        while(temp->next){
            temp = temp->next;
        }
        Node* A = new Node;
        A->data = element;
        A->next = nullptr;
        temp->next = A;
    }
}

void makeLoop(Node* &P){
    Node* temp = P;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = P;
}

void display(Node* P){
    while(P){
        cout<<P->data<<"->";
        P = P->next;
    }
    cout<<"nullptr"<<endl;
}

bool isLoop(Node* P){
    Node* A = P;
    Node* B = P;
    if(!P){
        return false;
    }
    if(!P->next){
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

int main(){
    Node* head = nullptr;
    addLast(head , 2);
    addLast(head , 9);
    addLast(head , 4);
    addLast(head , 1);
    addLast(head , 5);
    display(head);
    makeLoop(head);
    cout<<isLoop(head);
    // display(head);
    return 0;
}