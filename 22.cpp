// Classes And Constructors
#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length , breadth; 
    public: 
    Rectangle(int l , int b){
        length = l; 
        breadth = b; \
    }
    int area(){
        return length*breadth; 
    }
};
int main(){
    Rectangle r(5,8);
    int p = r.area();
    cout<<p;  
    return 0;
}