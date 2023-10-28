// Reverse An Array 

#include<iostream>
using namespace std;

struct Array{
    int length;
    int size;
    int A[10];
};

void display(Array arr){
    for(int i = 0 ; i<arr.length ; i++){
        cout<<arr.A[i]<<" "; 
    }
    cout<<endl;
}
void reverse(Array *arr ){
    int *B;
    B = new int[arr->length];
    for(int i = 0 , j = arr->length-1 ; i<arr->length ; i++ , j--){
        B[i]=arr->A[j];
    }
    for(int i = 0 ; i<arr->length ; i++){
        arr->A[i]=B[i];
    }
};

void reverse2(Array *arr){
    for(int i=0 , j=arr->length-1 ; i<j ; i++ , j--){
        int temp = arr->A[j];
        arr->A[j] = arr->A[i];   
        arr->A[i] = temp;
    }
}
int main(){
    Array arr={10,10,{1,2,3,4,5,6,7,8,9,10}};
    display(arr);
    reverse(&arr);
    display(arr);
    reverse2(&arr);
    display(arr);
    return 0;
}