// AVL Tree

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int height;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        height = 1;
        left = right = nullptr;
    }
};

class AVLTree{
    Node* root;
    public:
    AVLTree(){
        root = nullptr;
    }

    int height(Node* temp){
        if(!temp){
            return 0;
        }
        return temp->height;
    }

    int balanceFactor(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return height(node->left) - height(node->right);
    }

    void updateHeight(Node* node) {
        if (node != nullptr) {
            node->height = 1 + max(height(node->left), height(node->right));
        }
    }

    void inOrderTraversal(Node* temp){
        if(temp){
            inOrderTraversal(temp->left);
            cout<<temp->data<<" ";
            inOrderTraversal(temp->right);
        }
    }

    Node* rotateRight(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        updateHeight(y);
        updateHeight(x);

        return x;
    }

    Node* rotateLeft(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x;
        x->right = T2;

        updateHeight(x);
        updateHeight(y);

        return y;
    }

    Node* insert(Node* node, int data) {
        if (node == nullptr) {
            return new Node(data);
        }

        if (data < node->data) {
            node->left = insert(node->left, data);
        } else if (data > node->data) {
            node->right = insert(node->right, data);
        } else {
            // Duplicate datas not allowed
            return node;
        }

        // Update height of current node
        updateHeight(node);

        // Perform rotation if needed
        int balance = balanceFactor(node);

        // Left Left Case
        if (balance > 1 && data < node->left->data) {
            return rotateRight(node);
        }

        // Right Right Case
        if (balance < -1 && data > node->right->data) {
            return rotateLeft(node);
        }

        // Left Right Case
        if (balance > 1 && data > node->left->data) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }

        // Right Left Case
        if (balance < -1 && data < node->right->data) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }

        return node;
    }

    void insert(int data) {
        root = insert(root, data);
    }

    Node* getRoot(){
        return root;
    }
};

int main(){
    AVLTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(25);
    tree.insert(28);
    tree.insert(27);
    tree.insert(5);

    cout<<"Height of Tree : "<<tree.height(tree.getRoot())<<endl;

    tree.inOrderTraversal(tree.getRoot());

    return 0;
}