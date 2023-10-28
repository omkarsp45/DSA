#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};
    
    void Display(struct Array A){
        for(int i=0; i<A.length; i++)
        {
            cout<<A.A[i]<<" ";
        }
    }

    void Append(struct Array *arr , int x ){
        if(arr->length<arr->size){
            (*arr).A[arr->length++] = x;
        }
    }

    void Insert(struct Array *arr , int index , int x){
        if (index>=0 && index<=arr->length)
        {
            for(int i=arr->length; i>index; i--)
            {
                arr->A[i] = arr->A[i-1];
            }
            arr->A[index]= x;
            arr->length++;
            
        }
    }

int main(){
    Array A={{1,2,3,4,5}, 10 , 5};
    Append(&A , 10);
    Insert(&A,0,12);
    Display(A);
    return 0;
}