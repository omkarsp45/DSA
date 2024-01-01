// Queue using C++

#include<iostream>
using namespace std;

class queue{
    private:
    int size;
    int front;
    int rear;
    int *realQueue;
    public:
    queue(int size){
        front = rear = -1;
        realQueue = new int[size];
        this->size = size;
    }

    void enqueue(int data){
        if(rear==size-1){
            cout<<"Queue is Full"<<endl;
        }
        else{
            rear++;
            realQueue[rear]=data;
        }
    }

    int dequeue(){
        int x = -1;
        if(rear==front){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            front++;
            x = realQueue[front];
        }
        return x;
    }

    int Display(){
        for(int i = front ; i < rear ; i++){
            cout<<realQueue[i+1]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    queue Q(5);
    Q.enqueue(4);
    Q.enqueue(3);
    Q.enqueue(7);
    Q.enqueue(2);
    Q.enqueue(9);
    Q.Display();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.Display();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.enqueue(5);
    return 0;
}