// Sparse Matrix Code Struct

#include<iostream>
using namespace std;

struct Element{
    int i ; 
    int j ; 
    int x ; 
};  

struct Sparse{
    int m ;
    int n ; 
    int num ; 
    struct Element *E ; 
};

void create(struct Sparse *S){
    cout<<"Enter Dimension of Matrix : "<<endl;
    cin>> S->m >> S->n;
    cout<<"Enter number of Non-Zero : ";
    cin>> S->num;
    S->E = new Element[S->num];
    cout<<"Enter Row, Column, Non-Zero Elements : "<<endl; 
    for(int i = 0 ; i < S->num ; i++){
        cin>> S->E[i].i >> S->E[i].j >> S->E[i].x;
        S->E[i].i--;
        S->E[i].j--;
    }
}

void display(struct Sparse S){
    int k = 0 ; 
    for(int i = 0 ; i < S.m ; i++){
        for(int j = 0 ; j < S.n ; j++){
            if(i==S.E[k].i && j==S.E[k].j){
                cout<<S.E[k++].x<<" ";
            }         
            else{
                cout<<0<<" "; 
            }
        }
        cout<<endl; 
    }
}

int main(){
    Sparse S;
    create(&S);
    display(S);
    delete[] S.E;
    return 0;
}