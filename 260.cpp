// Circular Queue

#include<iostream>
using namespace std;

class CircularQueue{
    private:
    int size;
    int front;
    int rear;
    int *realQueue;
    public:
    CircularQueue(int size){
        front = rear = 0;
        realQueue = new int[size];
        this->size = size;
    }

    void enqueue(int data){
        if((rear + 1)%size == front){
            cout<<"Queue is Full"<<endl;
        }
        else{
            rear = (rear +1 )% size;
            realQueue[rear]=data;
        }
    }

    int dequeue(){
        int x = -1;
        if(rear==front){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            front = (front+1)% size;
            x = realQueue[front];
        }
        return x;
    }

    int Display(){
        int i = front + 1;
        do{
            cout<<realQueue[i]<<" ";
            i = (i+1)%size;
        }while(i!=(rear+1)%size);
        cout<<endl;
    }
};

int main(){
    CircularQueue Q(5);
    Q.enqueue(4);
    Q.enqueue(3);
    Q.enqueue(7);
    Q.enqueue(2);
    Q.Display();
    Q.dequeue();
    Q.dequeue();
    Q.Display();
    Q.dequeue();
    Q.Display();
    Q.enqueue(5);
    Q.enqueue(7);
    Q.enqueue(0);
    Q.Display();
    return 0;
}