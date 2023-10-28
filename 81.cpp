// Address of arrays

#include<iostream>
using namespace std;

int main(){
    int a[5] = {23,5,7,34,87};
    for(int i=0; i<5; i++)
    {
        cout<<&a[i]<<endl;
    }
    // Taking four byte
    return 0;
}