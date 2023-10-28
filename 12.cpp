#include<iostream>
#include<cstdlib>

using namespace std;

struct Rectangle{
    int length; 
    int breadth; 
};
int main(){
    Rectangle *p; 
    // p = (Rectangle*)malloc(sizeof(Rectangle));
    p = new Rectangle; 
    p->length = 10; 
    p->breadth = 15;
    cout<<p->length<<endl;   
    cout<<p->breadth<<endl;  
    return 0;
}