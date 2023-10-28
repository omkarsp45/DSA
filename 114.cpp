// Merging Of Arrays 

#include<iostream>
using namespace std;

void merging(int *A ,int *B , int m , int n){
    int C[m+n];
    int j = 0 , k = 0; 
    for(int i=0; i<m+n ; i++){
        if(j==m){
            C[i]=B[k];
            k++;
        }
        else if(k==n){
            C[i]=A[j];
            j++;
        }
        else if(A[j]<B[k]){
            C[i]=A[j];
            j++;
        }
        else {
            C[i]=B[k];
            k++;
        }
    }
    for(int i=0 ; i<m+n ; i++){
        cout<<C[i]<<" ";
    }
}

int main(){
    int A[]={2,5,8,10,15}; 
    int B[]={1,4,12,19};
    int m = sizeof(A)/sizeof(int);    
    int n = sizeof(B)/sizeof(int);
    merging(A,B,m,n);
    return 0;
}