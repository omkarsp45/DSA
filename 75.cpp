// nCR

// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return fact(n-1)*n;
// }

// double nCr(int n , int r){
//     double num = fact(n);
//     double den = fact(n-r)*fact(r);
//     return num/den;
// }

// int main(){
//     cout<<nCr(7,2);
//     return 0;
// }

#include<iostream>
using namespace std;

double NCR(int n , int r){
    if(n==r||r==0){
        return 1;
    }    
    return NCR(n-1,r-1) + NCR(n-1,r);
} 
int main(){
    cout<<NCR(7,2);
    return 0;
}