// Practice: Pointer 
// Pointer to an array 

// #include<iostream>
// using namespace std;

// int main(){
//     int *p , A[4]={2,5,3,7};
//     // int  ;  
//     p = A; //No need to give ampersand while creating pointer to array 
//     for (int  i = 0; i < 4; i++)
//     {
//         cout<<A[i]<<endl ; 
//         cout<<p[i]<<endl ; 
//     }
    
//     return 0;
// }



//         **Array in Heap Memory**          //

// #include<iostream>
// #include<stdio.h>
// #include<cstdlib>
// using namespace std;

// int main(){
//     int *p ; 
//     // p = (int*)malloc(5*sizeof(int));     //used in c 
//     p = new int[5];                         //alternative method used in c++  
//     // from above line we are dynamically allocating memory in heap .
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"p["<<i<<"] :";
//         cin>>p[i];
//     }
//     cout<<"Display : \n";
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"p["<<i<<"] :";
//         cout<<p[i]<<endl;
//     }

//     delete []p;   //deallocating of memory in c++
//     free(p);      //alternative , used in c 
//     return 0;
// }

//     ****sizeof(pointer)****      //

#include<iostream>
using namespace std;

int main(){
    int *p1;
    char *p2; 
    float *p3; 
    double *p4; 
    short *p5; 
    struct rect *p6; 

    cout<<sizeof(p1)<<endl                             
        <<sizeof(p2)<<endl;             
    cout<<sizeof(p3)<<endl;             
    cout<<sizeof(p4)<<endl;             
    cout<<sizeof(p5)<<endl;             
    cout<<sizeof(p6)<<endl;             
                          
    return 0;
}