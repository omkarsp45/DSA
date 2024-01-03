// Tree Data Structure

#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
    Node(){
        left = nullptr;
        right = nullptr;
        data = 0;
    }
};

class BinaryTree{
    private:
    Node* root;
    public:
    BinaryTree(){
        root = nullptr;
    }
    void insert() {
        Node* p;
        Node* t;
        queue<Node*> q;
        int x;
        cout << "Enter root data: " << flush;
        cin >> x;
        root = new Node(x);
        q.push(root);
    
        while (! q.empty()){
            p = q.front();
            q.pop();
    
            cout << "Enter left child data of " << p->data << ": " << flush;
            cin >> x;
            if (x != -1){
                t = new Node(x);
                p->left = t;
                q.push(t);
            }
    
            cout << "Enter right child data of " << p->data << ": " << flush;
            cin >> x;
            if (x != -1){
                t = new Node(x);
                p->right = t;
                q.push(t);
            }
        }
    }

    void PreorderTraversal(Node* temp){
        if(temp){
            cout<<temp->data<<" ";
            PreorderTraversal(temp->left);
            PreorderTraversal(temp->right);
        }
    }

    void InorderTraversal(Node* temp){
        if(temp){
            InorderTraversal(temp->left);
            cout<<temp->data<<" ";
            InorderTraversal(temp->right);
        }
    }

    void PostorderTraversal(Node* temp){
        if(temp){
            PostorderTraversal(temp->left);
            PostorderTraversal(temp->right);
            cout<<temp->data<<" ";
        }
    }

    void LevelorderTraversal(Node* temp){
        if (!temp)
            return;
        queue<Node*> q;
        cout << temp->data << " ";
        q.push(temp);
        Node* p;
        while (!q.empty()) {
            p = q.front();
            q.pop();
            if (p->left) {
                cout << p->left->data << " ";
                q.push(p->left);
            }
            if (p->right) {
                cout << p->right->data << " ";
                q.push(p->right);
            }
        }
    }

    Node* createTreefromTraversal(int *inorder, int *preorder, int instart, int inend){
        static int preindex = 0 ;

        if(instart>inend){
            return nullptr;
        }

        Node *node = new Node(preorder[preindex]);

        preindex++;

        if(instart==inend){
            return node;
        }
        
        int splitIndex = searchInorder(inorder, instart, inend, node->data);
        node->left = createTreefromTraversal(inorder, preorder, instart, splitIndex-1);
        node->right = createTreefromTraversal(inorder, preorder, splitIndex+1, inend);
        return node;
    }

    int searchInorder(int inorder[], int instart, int inend, int data){
        for(int i = instart; i<=inend; i++){
            if(inorder[i]==data){
                return i;
            }
        }
        return -1;
    }

    int countNodes(Node* temp){
        if(!temp){
            return 0;
        }
        int x = countNodes(temp->left);
        int y = countNodes(temp->right);
        return x+y+1;
    }

    int height(Node* temp){
        if(temp){
            int x = height(temp->left);
            int y = height(temp->right);
            if(x>y){
                return x+1;
            }
            else{
                return y+1;
            }
        }
        return 0;
    }

    int leafNodesCount(Node* temp){
        static int x = 0;
        if(temp){
            leafNodesCount(temp->left);
            leafNodesCount(temp->right);
            if(!temp->left && !temp->right){
                x++;
            }
        }
        return x;
    }

    Node* getRoot(){
        return root;
    }
};

int main(){
    // BinaryTree B;
    // B.insert();
    // Recursive Techniques
    // B.InorderTraversal(B.getRoot());
    // cout<<endl;
    // B.PreorderTraversal(B.getRoot());
    // cout<<endl;
    // B.PostorderTraversal(B.getRoot());
    // cout<<endl;
    // Non Recursive Technique Using Queue
    // B.LevelorderTraversal();
    // cout<<endl;
    // int inorderArr[] = {3,12,6,4,7,10,11,5,2,8};
    // int preorderArr[] = {10,12,3,4,6,7,5,11,2,8};
    // Node* root2 = B.createTreefromTraversal(inorderArr, preorderArr, 0, sizeof(inorderArr)/sizeof(inorderArr[0])-1);
    // B.PostorderTraversal(root2);
    // cout<<endl;
    // B.LevelorderTraversal(root2);
    // cout<<endl;
    // B.PreorderTraversal(root2);
    // cout<<endl;
    // B.InorderTraversal(root2);
    // cout<<endl;
    // cout<<"Number Of Nodes in Given Tree : "<<B.countNodes(root2)<<endl;
    // cout<<"Height of Given Tree : "<<B.height(root2)-1<<endl;
    // cout<<"----------------"<<endl<<endl;

    BinaryTree B1;
    int inorder1[]={4,2,5,1,6,3,7};
    int preorder1[]={1,2,4,5,3,6,7};
    Node* root1 = B1.createTreefromTraversal(inorder1, preorder1, 0, sizeof(inorder1)/sizeof(inorder1[0])-1);
    B1.PostorderTraversal(root1);
    cout<<endl;
    cout<<"Number Of Nodes in Given Tree : "<<B1.countNodes(root1)<<endl;
    cout<<"Height of Given Tree : "<<B1.height(root1)-1<<endl;
    cout<<"Number of Leaf Nodes : "<<B1.leafNodesCount(root1)<<endl;
    return 0;
}