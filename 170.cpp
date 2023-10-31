// Polynomial 

#include<iostream>
using namespace std;

struct Term
{
    int coeff; 
    int exp; 
};

struct Polynomial
{
    int n; 
    Term *terms;  
};

void create(struct Polynomial *P){
    cout<<"Enter no. of terms :"; 
    cin>>P->n;
    P->terms = new Term[P->n];
    cout<<"Enter Terms : "<<endl;
    for(int i = 0 ; i < P->n ; i++){
        cin>>P->terms[i].coeff>>P->terms[i].exp;
    }
}

void display(struct Polynomial P){
    for(int i = 0 ; i < P.n ; i++){
        cout<<P.terms[i].coeff<<"x"<<P.terms[i].exp<<" ";
        if(i==(P.n-1)){
            break;
        }
        cout<<"+ ";
    }
    cout<<endl;
}


int main(){
    Polynomial P;
    create(&P);
    display(P);
    return 0;
}