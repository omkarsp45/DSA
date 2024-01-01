// Queue in C
#include<iostream>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int* realQueue;
};

void createQueue(Queue *Q, int size){
    Q->size = size;
    Q->front = -1;
    Q->rear = -1;
    Q->realQueue = new int[Q->size];
}

void enqueue(Queue *Q, int data){
    if(Q->rear==Q->size-1){
        cout<<"Queue is Full"<<endl;
    }
    else{
        Q->rear++;
        Q->realQueue[Q->rear] = data;
    }
}

int dequeue(Queue *Q){
    int x = -1 ;
    if(Q->front==Q->rear){
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    Q->front++;
    x = Q->realQueue[Q->front];
    return x;
}

void Display(Queue Q){
    for(int i = Q.front ; i < Q.rear; i++){
        cout<<Q.realQueue[i+1]<<" ";
    }
    cout<<endl;
}

int main(){
    Queue queue;
    createQueue(&queue,5);
    enqueue(&queue,10);
    enqueue(&queue,20);
    enqueue(&queue,30);
    enqueue(&queue,40);
    enqueue(&queue,50);
    Display(queue);
    dequeue(&queue);
    dequeue(&queue);
    dequeue(&queue);
    Display(queue);
    cout<<dequeue(&queue)<<endl;
    Display(queue);
    return 0;
}