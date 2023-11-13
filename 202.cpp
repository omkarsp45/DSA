#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void addLast(Node* &P , int element){
    if(P==nullptr){
        P = new Node;
        P->data = element;
        P->next = nullptr;
    }
    else{
        Node* temp = P ; 
        while(temp->next){
            temp = temp->next;
        }
        Node* neww = new Node;
        neww->data = element;
        neww->next = nullptr;
        temp->next = neww;
    }
}

void display(Node* P){
    while(P){
        cout<<P->data<<"->";
        P = P->next;
    }
    cout<<"nullptr"<<endl;
}

void Concate(Node* &X , Node* Y){
    Node* temp = X;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = Y;
}

void MergeLL(Node* &X , Node* Y){
    Node* A = X ; 
    Node* B = Y ;
    Node* maintainer = nullptr;
    if(A->data < B->data){
        maintainer = A;
        A = A->next;
    }
    else{
        maintainer = B;
        B = B->next;
    }
    Node* mergedList = maintainer;
    while(A != nullptr && B != nullptr){
        if(A->data < B->data){
            maintainer->next = A;
            A = A->next;
        }
        else{
            maintainer->next = B;
            B = B->next;
        }
        maintainer = maintainer->next;
    }    
    if (A != nullptr){
        maintainer->next = A;
    }
    else if (B != nullptr){
        maintainer->next = B;
    }
    X = mergedList;
}


int main(){
    Node* A = nullptr;
    Node* B = nullptr;
    addLast(A,1);
    addLast(A,3);
    addLast(A,8);
    addLast(A,11);
    addLast(A,14);
    addLast(A,25);
    addLast(B,2);
    addLast(B,7);
    addLast(B,9);
    addLast(B,16);
    addLast(B,19);
    display(A);
    display(B);
    // Concate(A,B);
    MergeLL(A,B);
    display(A);
    return 0;
}