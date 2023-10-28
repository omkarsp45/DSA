// Structure And Funtions 

#include<iostream>
using namespace std;

struct Rectangle{
    int length, breadth;   
};

int area(Rectangle r){
    return r.length*r.breadth; 
}

int perimeter(Rectangle r){
    return (2*(r.breadth+r.length));
}
int main(){
    Rectangle r={0,0};
    cout<<"Length :";
    cin>>r.length; 
    cout<<"Breadth :";
    cin>>r.breadth;  //Or use Initialise funtion  
    cout<<"Area :"<<area(r)<<endl;   
    cout<<"Perimeter :"<<perimeter(r);   
    return 0;
}