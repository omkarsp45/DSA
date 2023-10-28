// Static / Global Variable in Recursion 

#include<iostream>
using namespace std; 

int x = 0;
int fun(int n){
    // static int x= 0;        intialising globally as well as statically inside fun works same 
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int x = 5; 
    cout<<fun(5);
}