// Sparse Matrix using Class

#include <iostream>
using namespace std;

class Element
{
public:
    int i;
    int j;
    int x;
};

class Sparse
{
private:
    int m;
    int n;
    int num;
    Element *E;
public:
    Sparse(int m , int n , int num ){
        this->m = m; 
        this->n = n; 
        this->num = num; 
        E = new Element[this->num];
    }    
    ~Sparse(){
        delete [] E;
    }
    void read(){
        for(int i = 0 ; i < num ; i++){
            cin>>E[i].i>>E[i].j>>E[i].x;
        }
    }
    void display(){
        int k = 0 ; 
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(E[k].i==i && E[k].j==j){
                    cout<<E[k++].x<<" ";
                }
                else{
                    cout<<0<<" "; 
                }
            }
            cout<<endl;
        }
    }
};

int main()
{
    Sparse S(4,4,4); 
    S.read();
    S.display();
    return 0;
}