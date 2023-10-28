// Finding Dups in Sorted Array 

#include<iostream>
using namespace std;

void FindDups(int *arr , int n){
    int lastDup = 0;
    int count = 0; 
    for(int i = 0 ; i<n-1 ; i++){
        if(arr[i]==arr[i+1]&&arr[i+1]!=lastDup){
            cout<<arr[i+1]<<" ";
            lastDup = arr[i+1];
            count++;
        }
        else if(arr[i+1]==lastDup){
            count++;
        }
    }
    cout<<endl<<count;
}

int main(){
    int A[]= {1,1,1,2,3,4,5,6,6,6,7,8,9,9,10,11,12,13,15,15,16,17,18,19,19,24,24,26,27,28,29,30,30};
    int n = sizeof(A)/sizeof(int);
    FindDups(A,n);
    return 0;
}