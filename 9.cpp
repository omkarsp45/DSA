//     ****Reference****    //

#include<iostream>
using namespace std;

int main(){
    int a =10; 
    int &r =a ; 
    cout<<a<<endl ; 
    cout<<*(&r)<<endl ;   // r chya address varti a chi value store keli ahe 
    // mnhjech  r chya address la dereference kelyaver a chi value milel
    cout<<&r<<endl; 
    cout<<r<<endl; 
    r++;
    cout<<r<<endl; 
    cout<<a<<endl ;
    return 0;
}