// Function 

#include<iostream>
using namespace std;

int add(int a,int b){  //formal parameters 
    int c = a + b; 
    return c; 
}
int main(){
    int a=12 , b=13, c; 
    c= add(a,b);     //actual parameters 
    cout<<c; 
    return 0;
}