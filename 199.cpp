// Check list is sorted or not 

#include <iostream>
#include <vector>
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

void reverseLL(Node* &P) {
    vector<int> Pusher;
    Node* temp = P;
    int i = -1;

    while (temp) {
        Pusher.push_back(temp->data);
        temp = temp->next;
        i++;
    }

    temp = P;
    while (temp) {
        temp->data = Pusher[i--];
        temp = temp->next;
    }
}

void reverseSlidingPointer(Node* &P){
    Node* temp = P;
    Node* a = nullptr;
    Node* b = nullptr;
    while(temp){
        b = a ; 
        a = temp ; 
        temp = temp->next;
        a->next = b;
    }
    P = a;
}
//    Ex.       2->5->7->3->nullptr
//        null<-2<-5<-7<-3


void reverseRecursion(Node* &P , Node* a , Node *b){
    if(a){
        reverseRecursion(P,a->next,a);
        a->next=b;
    }
    else{
        P=b;
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
    // reverseLL(head);
    // reverseSlidingPointer(head);
    Node* a = head;
    Node* b = nullptr;
    reverseRecursion(head , a , b);
    display(head);
    return 0;
} 
