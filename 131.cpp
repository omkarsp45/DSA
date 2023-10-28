#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    // char temp = 'A'; 
    // cout<<temp;


    // Array Of Char
    // char A[5] = {97,'b','c'};
    // cout<<A[0];
    // cout<<A[4];


    //String Array
    // char A; 
    // cout<<typeid(A).name();

    char B[] = {'O' , 'm' , 'k' , 'a' , 'r' , '\0'};
    // cout<<B;
    // cout<<typeid(B).name();

    string P = "Omya"; 
    // cout<<typeid(P).name();
    cout<<P;
    return 0;
}