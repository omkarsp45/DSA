// Array Declaration

#include<iostream>
using namespace std;

int main(){
    int a[] = {2,5,7,3,6};
    for (int i = 0; i <sizeof(a)/sizeof(a[0]); i++)
    {
    cout<<i[a]<<" ";    
    }
    cout<<endl<<*(a+2);
    return 0;
}