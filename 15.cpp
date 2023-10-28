// Parameter Passing Methods 

// Call By Value
// #include<iostream>
// using namespace std;

// void swap(int a , int b){
//     int temp =a ;
//     a= b; 
//     b = temp; 
//     cout<<a<<endl<<b;
//     cout<<"\nexited funtion\n";  
// }
// int main(){
//     int a =10 , b = 20;
//     swap(a,b);
//     cout<<a<<endl<<b;
//     return 0;
// }


// Call By Address(using Pointers)(actual para. are affected) 
// #include<iostream>
// using namespace std;

// void swap(int *a , int *b){
//     int temp =*a ;
//     *a= *b; 
//     *b = temp; 
//     cout<<*a<<endl<<*b;
//     cout<<"\nexited funtion\n";  
// }
// int main(){
//     int a =10 , b = 20;
//     swap(&a,&b);
//     cout<<a<<endl<<b;
//     return 0;
// } 


// Call By Reference(actual para. are affected)
#include<iostream>
using namespace std;

void swap(int &a , int &b){
    int temp =a ;
    a= b; 
    b = temp; 
    // cout<<a<<endl<<b;
    // cout<<"\nexited funtion\n";  
}
int main(){
    int a =10 , b = 20;
    swap(a,b);
    printf("%d        %d",a,b);
    return 0;
}
