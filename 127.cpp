// Finding Sum Pair Using Hashing

#include<iostream>
using namespace std;

void FindPair(int *A , int n , int m ){
    int max = A[0];    
    for(int i = 0 ; i < n ; i++){
        if(A[i]>max){
            max = A[i];
        }
    }

    int Hash[max+1] = {};
    for(int i=0 ; i<n ; i++){
        if(Hash[m-A[i]]!=0&&(m-A[i])<=max&&(m-A[i])>=0){
            cout<<A[i]<<","<<m-A[i]<<endl;
        }
        Hash[A[i]]++;
    }
}

int main(){
    int A[] = {4,5,3,6,8,7,2,1,9,0};
    int n = sizeof(A) / sizeof(A[0]);
    int m = 0 ; 
    cin>>m;
    FindPair(A,n,m);
    return 0;
}