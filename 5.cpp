// Structures
#include<iostream>
using namespace std;

// struct  Rectangle
// {
//     int length;
//     int breadth;
// };

// int main(){
//     Rectangle r= {12,4}; 
//     r.length = 14;
//     cout<<r.length<<endl; 
//     cout<<r.breadth<<endl; 
//     printf("Area Of Rectangle : %d",r.length*r.breadth);
//     return 0;
// }

// Array Of Structure

// typedef struct Student{
//     int marks; 
//     int roll; 
// }Std;

// int main(){
//     Std S[3]={{78,1},{86,2},{73,3}};
//     cout<<S[0].marks; 
//     return 0;
// } 

struct Student{
    // short marks; 
    // short roll; 
    // char name; 
    // Above Will Give Size 6(2-2-2)
    int marks; 
    int roll; 
    char name;
    // Below Will Give Size 12(4-4-4)
};

int main(){
    Student S1;
    // cout<<S1.marks; 
    printf("\n%d",sizeof(S1));
    return 0;
} 