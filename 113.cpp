// Bring Positive Numbers to right side and negative to left of array

#include <iostream>
using namespace std;

void Rearrange(int *arr, int n)
{
    int i = 0 ; 
    int j = n-1;
    while(i<j){
        while(arr[i]<0) i++;
        while(arr[j]>=0) j--;
        if(i<j){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
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

int main()
{
    int array[10] = {12, -14, 65, 32, -87, -47, 20, 21, 68, 43};
    Rearrange(array , 10);
    display(array , 10);
    return 0;
}