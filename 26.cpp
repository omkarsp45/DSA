#include<iostream>
using namespace std;

class Rectangle{
    int length ; 
    int breadth ;
    public:
    Rectangle(){
        length= 0; 
        breadth= 0; 
    } 
    Rectangle(int l , int b){
        length= l; 
        breadth= b; 
    } 
    int area(){
        return length*breadth; 
    }
    void getData(int l , int b){
        length = l ; 
        breadth = b ; 
    }
    ~Rectangle(){
        cout<<"\nDestructor Is Called"<<endl; 
    }
};
int main(){
    Rectangle r(10,15);
    cout<<"Area : "<<r.area();
    return 0;
}