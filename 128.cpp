// finding sum pair

#include<iostream>
using namespace std;

void findPair(int *A , int n , int m){
    int i = 0 , j = n-1;
    while(i<j){
        if(A[i]+A[j]==m){
            cout<<A[i]<<","<<A[j]<<endl;
            i++;
            j++;
        }
        else if(A[i]+A[j]>m){
            j--;
        }
        else if(A[i]+A[j]<m){
            i++;
        }
    }
}

int main(){
    int A[] = {1,3,4,6,7,9,12,15,17,19,20};
    int n = sizeof(A)/sizeof(A[0]);
    int m = 0; 
    cin>>m;
    findPair(A,n,m);
    return 0;
}