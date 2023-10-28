#include<iostream>
using namespace std;

// Diagonal Matrix using struct

struct Matrix{
    int n;
    int A[3];
};

void Set(struct Matrix *m , int i , int j , int x){
    if(i==j){
        m->A[i-1] = x;
    }
}

int Get(struct Matrix m, int i , int j){
    if(i==j){
        return m.A[i-1]; 
    }
    else{
        return 0 ;  
    }
}

void Display(struct Matrix m ){
    for(int i=0 ; i<m.n ; i++){
        for (int j=0; j<m.n; j++){
            if(i==j){
                cout<<m.A[i]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    
}
int main(){
    Matrix M;
    M.n = 3;
    Set(&M , 1 , 1 , 5);
    Set(&M , 2 , 2 , 3);
    Set(&M , 3 , 3 , 9);
    // Set(&M , 4 , 4 , 7);     
    // Display(M);
    cout<<Get(M,1,1)<<endl;
    cout<<Get(M,2,3)<<endl;
    cout<<Get(M,3,3)<<endl;
    // cout<<Get(M,4,4)<<endl;
    return 0;
}