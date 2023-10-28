#include<iostream>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

int main(){
    int *p; 
    p = (int*)malloc(5*4);   //4 - size of int   //array inside heap
    
    return 0;
}