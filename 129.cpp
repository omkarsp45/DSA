// Finding Max and Min in Single Scan

#include<iostream>
using namespace std;

void FindMaxMin(int *A , int n ){
    int max=A[0] , min=A[n-1] ;     
    for(int i = 0 , j = n-1 ; i<n ; i++ , j--){
        if(A[i]>max){
            max = A[i];
        }
        if(A[j]<min){
            min = A[j];
        }
    }
    cout<<"Min : "<<min<<endl;
    cout<<"Max : "<<max<<endl;
}

int main(){
    int A[] = {5,3,435,76,34,87,-300,78,5,354,768,34,12,64,65,321,135,68,15,345,18,-301};
    int n = sizeof(A)/sizeof(int);
    FindMaxMin(A,n);
    return 0;
}