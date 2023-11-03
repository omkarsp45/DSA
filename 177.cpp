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

// void addLast(Node *P , int e){
//     Node *temp = new Node;
//     temp->data = e;
//     temp->next = nullptr;
//     while(P->next != nullptr){
//         P = P->next;
//     }
//     P->next = temp;
// }

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

int main(){
    Node * head = new Node; 
    head->data = 5;
    head->next = nullptr;
    addLast(head , 7);
    addLast(head , 9);
    addLast(head , 2);
    addLast(head , 13);
    display(head);
    return 0;
}