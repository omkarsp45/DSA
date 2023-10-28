// Power using Recursion 

#include<iostream>
using namespace std;

int pow(int a , int b){
   if(b==0){
    return 1;
   }
   return a * pow (a,b-1);
}

int main(){
    cout<<pow(2,4);
    return 0;
}