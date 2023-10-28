#include<iostream>
using namespace std;

int main(){
    int a= 10;
    int *p;
    cout<<a<<endl; 
    cout<<&a<<endl;
    p = &a;
    cout<<*p<<endl;

    return 0;
}