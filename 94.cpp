#include<iostream>
#include<cstdlib>
using namespace std;

struct Array
{
    int *A;
    int size; 
    int length;
};

int main(){
    Array arr;
    cin>>arr.size;
    arr.A = new int[arr.size] ;
    arr.length = 0; 

    int n ;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>arr.A[i];
    }
    arr.length = n;
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i]<<" ";
    }
    
    return 0;
}