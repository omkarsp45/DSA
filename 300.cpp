// Binary Search Tree

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BST{
    private:
    Node* root;
    public:
    BST(){
        root = nullptr;
    }

    Node* insert(Node* temp, int val){
        if(temp==nullptr){
            return new Node(val);
        }
        if(val<temp->data){
            temp->left = insert(temp->left, val);
        }
        else if(val>temp->data){
            temp->right = insert(temp->right, val);
        }
        return temp;
    }

    void insert(int val){
        root = insert(root, val); // function overloading
    }

    void inOrderTraversal(Node* temp){
        if(temp){
            inOrderTraversal(temp->left);
            cout<<temp->data<<" ";
            inOrderTraversal(temp->right);
        }
    }

    Node* getRoot(){
        return root;
    }

    bool BSTsearch(int val){
        return BSTsearch(root, val)!=nullptr;
    }

    Node* BSTsearch(Node* temp, int val){
        if(temp == nullptr || temp->data == val){
            return temp;
        }
        if(val<temp->data){
            return BSTsearch(temp->left, val);
        }
        else if(val>temp->data){
            return BSTsearch(temp->right, val);
        }
    }

    int height(Node* temp){
        if(temp==nullptr){
            return 0;
        }
        int x = height(temp->left);
        int y = height(temp->right);
        if(x>y){
            return x+1;
        }
        return y+1;
    }

    Node* Inpre(Node* temp){
        while(temp && temp->right){
            temp = temp->right;
        }
        return temp;
    }

    Node* Insucc(Node* temp){
        while(temp && temp->left){
            temp = temp->left;
        }
        return temp;
    }

    Node* deleteNode(Node* temp, int val){
        if(temp==nullptr){
            return nullptr;
        }
        if(!temp->left && !temp->right){
            if(temp==root){
                root = nullptr;
            }
            delete temp;
            return nullptr;
        }
        if(val<temp->data){
            temp->left = deleteNode(temp->left, val);
        }
        else if(val>temp->data){
            temp->right = deleteNode(temp->right, val);
        }
        else{
            if(height(temp->left)>height(temp->right)){
                Node* a = Inpre(temp->left);
                temp->data = a->data;
                temp->left = deleteNode(temp->left, a->data);
            }
            else{
                Node* a = Insucc(temp->right);
                temp->data = a->data;
                temp->right = deleteNode(temp->right, a->data);
            }
        }
        return temp;
    }

    void deleteNode(int val){
        root = deleteNode(root, val);
    }
};

int main(){
    BST tree;
    tree.insert(67);
    tree.insert(78);
    tree.insert(34);
    tree.insert(92);
    tree.insert(23);
    tree.insert(15);
    tree.insert(56);
    tree.insert(83);
    tree.insert(44);

    tree.inOrderTraversal(tree.getRoot());
    cout<<endl;
    int x = 0;
    while(false){
        cout<<"Enter Number to Search : ";
        cin>>x;
        if(tree.BSTsearch(x)){
            cout<<"Yay! data is present in tree"<<endl;
        }
        else{
            cout<<"Sorry! data is not in tree"<<endl;
        }
    }

    cout<<"Height Of Tree : "<<tree.height(tree.getRoot())<<endl;

    tree.deleteNode(67);
    tree.deleteNode(44);
    tree.deleteNode(83);
    tree.deleteNode(15);

    tree.inOrderTraversal(tree.getRoot());
    cout<<endl;
    cout<<"Height Of Tree : "<<tree.height(tree.getRoot())<<endl;

    cout<<"Value Of Root : "<<tree.getRoot()->data<<endl;
    return 0;
}