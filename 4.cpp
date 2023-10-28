// Que On Arrays 
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int A[]={23,5,76,8,23,5,34,3};
    cout<<"Size of Array : "<<sizeof(A)<<endl;
    for (int i = 0; i < (sizeof(A)/4) ; i++)
    {
        cout<<A[i]<<endl;
        printf("%d\n",A[i]);
    }
    return 0;
}