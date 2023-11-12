// Check list is sorted or not 

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void addLast(Node* &P, int e) {
    // You should pass a reference to Node* to modify the head pointer if needed.
    if (P == nullptr) {
        P = new Node;
        P->data = e;
        P->next = nullptr;
    } else {
        Node* temp = P;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        Node* new_node = new Node;
        new_node->data = e;
        new_node->next = nullptr;
        temp->next = new_node;
    }
}

void display(Node* P) {
    while (P != nullptr) {
        cout << P->data << " ";
        P = P->next;
    }
    cout << endl;
}

void removeDups(Node *P){
    Node* A = P ; 
    Node* B = P->next;
    while(B->next!=nullptr){
        if(A->data!=B->data){
            A = B ;
            B = B->next ;
        }
        else{
            while(A->data==B->data && B->next!=nullptr){
                B = B->next;
            }
            if(B->next==nullptr){
                A->next = nullptr;
                break;
            }
            A->next = B;
        }
    }
}

int main() {
    Node* head = nullptr; // Initialize head to nullptr
    addLast(head, 1);
    addLast(head, 2);
    addLast(head, 2);
    addLast(head, 2);
    addLast(head, 2);
    addLast(head, 2);
    addLast(head, 2);
    addLast(head, 3);
    addLast(head, 3);
    addLast(head, 3);
    addLast(head, 3);
    addLast(head, 3);
    addLast(head, 3);
    addLast(head, 3);
    display(head);
    removeDups(head);
    display(head);
    return 0;
} 
