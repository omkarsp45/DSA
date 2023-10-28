// Practice : Structure as Parameter 

// #include<iostream>
// using namespace std;

// struct Rect 
// {
//     int length, breadth; 
// };

// void fun(Rect *p){
//     p->length = 10;
//     cout<<p->length<<endl;
// }
// int main(){
//     Rect R ={2,4};
//     fun(&R);
//     cout<<R.length<<endl;
//     return 0;
// }0


#include<iostream>
using namespace std;

struct Rectangle{
    int length , breadth; 
}; 

Rectangle *fun(){       
    Rectangle *p;
    p = new Rectangle;   //this will create memory in heap 
    p->length=10;
    p->breadth=12;
} 

int main(){
    Rectangle *ptr = fun();
    cout<<ptr->length<<endl;     
    cout<<ptr->breadth<<endl;     
    return 0;
}