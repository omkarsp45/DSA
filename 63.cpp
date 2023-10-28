// Factorial of number 

#include<iostream>
using namespace std;

int factorial(int n){
    if(n<0){
        cout<< "Factorial is not possible for : ";
        return n;
    }
    else if(n==0){
        return 1; 
    }
    return factorial(n-1)*n;
}
int main(){
    cout<<factorial(6);
    return 0;
}