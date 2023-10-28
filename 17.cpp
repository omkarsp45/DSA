// Array as Parameter 

// #include<iostream>
// using namespace std;

// void fun(int a[],int n ){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<endl; 
//     }
// }
// int main(){
//     int a[3]={23,15,44};
//     fun(a,3);
//     return 0;
// }


#include<iostream>
#include<cstdlib>
using namespace std;

int * fun(int n){
   int *p; 
   p = (int*)malloc(n*sizeof(int));
   return (p); 
}
int main(){
    int *A ; 
    A = fun(5);
    // cout<<A;  //Garbage value
    return 0;
}