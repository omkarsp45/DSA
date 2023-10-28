#include<iostream>
using namespace std;

int main(){
    int *p , *q ; 
    p = new int[5];
    p[0] = 23; 
    p[1] = 9;
    p[2] = 47;
    p[3] = 5;
    p[4] = 17;
    
    q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    
    delete[] p;
    p = q; 
    q = NULL;
    for (int i = 5; i < 10; i++)
    {
        cout<<"Enter "<<i+1<<"th Number : "; 
        cin>>p[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl<<sizeof(p);
    return 0;
}