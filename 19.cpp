// Structure as parameter 


// Call By Value
// #include<iostream>
// using namespace std;

// struct Rectangle
// {
//     int length , breadth; 
// };

// int Area(Rectangle abcd){
//     return abcd.length*abcd.breadth; 
// }
// int main(){
//     Rectangle r = {2,4};
//     cout<<Area(r);
//     return 0;
// }

// Call By Reference 
#include<iostream>
using namespace std;
struct Rectangle
    {
        int length , breadth; 
    };

void changeLength(Rectangle *p,int l){
    p->length=l; 
}    
int main(){
    Rectangle r ={10,5};
    changeLength(&r,20);
    cout<<r.length;
    return 0;
}

