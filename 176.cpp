// Linked List 

#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node* next;
};

// Added recursive method of printing ll 
void display(Node *P){
    if(P==nullptr){
        cout<<endl;
        return; 
    }
    else{
        display(P->next);
        cout<<P->data<<" ";  //prints reversely 
    }
}

int add(Node* P){
    int sum = 0 ; 
    while(P!=nullptr){
        sum += P->data;
        P = P->next;
    }
    return sum;
}

int count(Node *P){
    int toR = 0; 
    while(P!=nullptr){
        P = P->next;
        toR++;
    }
    return toR;
}

int main(){
    int A[] = {4,7,2,9,5,1};
    Node * head = new Node; 
    head->data = A[0];
    head->next = nullptr;
    Node *last;
    Node *temp;
    last = head; 

    // Creating Linked List 
    for(int i = 1 ; i < sizeof(A)/sizeof(A[0]) ; i++){
        // creating temp node 
        temp = new Node; 

        // Assign val to temp node 
        temp->data = A[i];
        temp->next = nullptr;

        last->next = temp;
        last = temp; 
    }

    // Displaying Linked List 
    Node *P = head; 
    // display(P);
    // cout<<count(P);
    cout<<add(P)<<endl;
    // while(P->next!=nullptr){
    //     cout<<P->data<<"->";
    //     P = P->next;
    // }
    // cout<<P->data;
    return 0;
}