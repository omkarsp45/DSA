// Recursion

// #include<iostream>
// using namespace std;

// void fun(int n ){
//    if(n>0){
//     cout<<n;
//     fun(n-1);
//     value is first printed and then recursive all takes place
//    } 
// }
// int main(){
//     int x= 5; 
//     fun(5); 
//     return 0;
// }

#include<iostream>
using namespace std;

void fun(int n ){
   if(n>0){
    fun(n-1);
    cout<<n;
    // cout will be called at the time of returning phase of recursive function
   } 
}
int main(){
    int x= 5; 
    fun(5); 
    return 0;
}
