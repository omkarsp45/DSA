// check array is sorted or not
// insert element in sorted list
// separate negative and positive elements in array 

#include<iostream>
using namespace std;

string CheckSorted(int *arr , int n){
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]>arr[i+1]){
            return "Unsorted";
        }
    }
    return "Sorted";
}

void insertInSorted(int *arr , int n , int x){
    for(int i= n-1 ; i>=0 ; i--)
    {
        if(x>arr[i]){
            arr[i+1] = x;
            return;
        }
        else if(i==0){
            arr[i+1] = arr[i];
            arr[i] = x;
            return;
        }
        else arr[i+1] = arr[i];
    }
    
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10] = {11 , 14 , 19 , 15 , 39};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // display(arr,n);
    // if(isSorted(arr,5)==1) cout<<"Array Is Sorted!\n";
    // else cout<<"Array is Not Sorted!\n";
    // insertInSorted(arr,5,25);
    // display(arr,n);
    cout<<CheckSorted(arr,5);
    return 0;
}