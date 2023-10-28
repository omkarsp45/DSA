// 2D Arrays 

#include<iostream>
using namespace std;

int main(){
    int A[3][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}}; //3 rows and 4 columns //inside stack

    // for(int i=0; i<3; i++){
    //     cout<<"[ ";
    //     for(int j=0; j<4; j++){
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<"]"<<endl;
    // }
    

    int *B[3];     //inside stack //points to arrays in heap
    B[0] = new int[4];
    B[1] = new int[4];   // inside heap
    B[2] = new int[4];

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<"Enter No. B["<<i+1<<"]["<<j+1<<"] :";
    //         cin>>B[i][j];
    //     }
    // }
    // for(int i=0; i<3; i++){
    //     cout<<"[ ";
    //     for(int j=0; j<4; j++){
    //         cout<<B[i][j]<<" ";
    //     }
    //     cout<<"]"<<endl;
    // }

    int **C;        //Inside stack //points to array in heap 
    C = new int*[3];    //inside heap //points to other 3 arrays in heap itself
    C[0] = new int[4];    //inside heap
    C[1] = new int[4];
    C[2] = new int[4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter No. C["<<i+1<<"]["<<j+1<<"] :";
            cin>>C[i][j];
        }
    }
    for(int i=0; i<3; i++){
        cout<<"[ ";
        for(int j=0; j<4; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
    
    return 0;
}