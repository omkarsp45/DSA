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

bool checkSort(Node* P) {
    while (P != nullptr && P->next != nullptr) {
        if (P->data > P->next->data) {
            return false;
        }
        P = P->next;
    }
    return true;
}

int main() {
    Node* head = nullptr; // Initialize head to nullptr
    addLast(head, 5);
    addLast(head, 7);
    addLast(head, 9);
    addLast(head, 12);
    addLast(head, 17);
    display(head);
    if (checkSort(head)) {
        cout << "List is Sorted" << endl;
    } else {
        cout << "List is not Sorted" << endl;
    }
    return 0;
}
