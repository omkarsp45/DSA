// #include<iostream>
// using namespace std;

// int get(int *arr , int index){       //call by address
//     if(index>=0 && index<sizeof(arr)/sizeof(arr[0])){
//         return arr[index]; 
//     }
//     return -1;    
// }

// int main(){
//     int arr[] = {11,22,33,44,55,66,77,88,99};
//     cout<<get(arr,3);
//     return 0;
// }

#include<iostream>
using namespace std;

struct sArray
{
    int arr[9];
};

int insert(sArray *a1 , int index){
    if(index>=0&&index<sizeof(a1->arr)/sizeof(int)){
        a1->arr[index] = 5;
    }
    return a1->arr[index];
}
int main(){
    sArray s1= {{12,23,34,45,56,67,78,89,90}};
    cout<<insert(&s1,3);
    return 0;
}