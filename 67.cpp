// Taylor Series

#include<iostream>
using namespace std;

//here x is the power of e and n is the term for precision of value
double e(int x , int n ){
    static double p = 1 , f = 1;
    double r;   
    if(n==0)
        return 1;
    r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r + (p/f); 
}

int main(){
    cout<<e(2,10);
    return 0;
}