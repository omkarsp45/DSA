#include<iostream>
#include<stack>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int element) {
        data = element;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void addLast(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    void connect(Node* connector) {
        Node* temp = connector;
        while (temp->next) {
            temp = temp->next;
        }
        Node* temp1 = head;
        while (temp1->next) {
            temp1 = temp1->next;
        }
        temp->next = temp1;
    }

    Node* getHead() {
        return head;
    }

    // Node* findIntersection(LinkedList& otherList) {
    //     Node* list1 = head;
    //     Node* list2 = otherList.getHead();

    //     while (list1 && list2 && list1 != list2) {
    //         list1 = list1->next;
    //         list2 = list2->next;

    //         if (!list1 && list2) {
    //             list1 = otherList.getHead();
    //         }
    //         if (!list2 && list1) {
    //             list2 = head;
    //         }
    //     }

    //     return list1;
    // }

    Node* findIntersection(Node* dup){
        stack<Node*> A ; 
        stack<Node*> B ;
        Node* head1 = head;
        Node* head2 = dup;
        while(head1){
            A.push(head1);
            head1 = head1->next;
        }
        while(head2){
            B.push(head2);
            head2 = head2->next;
        }
        Node* toR;
        while(A.top() == B.top()){
            toR = A.top();
            A.pop();
            B.pop();
        }
        return toR;
    }
};

int main() {
    LinkedList LL;
    LinkedList LL1;
    LL.addLast(4);
    LL.addLast(9);
    LL.addLast(5);
    LL1.addLast(12);
    LL1.addLast(17);
    LL1.addLast(19);
    LL.connect(LL1.getHead());
    LL.addLast(3);
    LL.addLast(1);
    LL.addLast(8);
    LL.display();

    Node* intersectionNode = LL.findIntersection(LL1.getHead());
    if (intersectionNode) {
        cout << "Intersection Point Data: " << intersectionNode->data << endl;
    }
    else {
        cout << "No Intersection Point" << endl;
    }

    return 0;
}
