// Symmetric Matrice

#include <iostream>
using namespace std;


class SymMatrix{
private:
    int n;
    int *A;

public:
    SymMatrix(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    void Set(int i, int j, int x)
    {
        if (i >= j)
        {
            A[i*(i-1)/2 + j - 1] = x;
        }
        else {
            A[j * (j - 1) / 2 + i - 1] = x;
        }
    }

    int Get(int i , int j ){
        if(i >= j){
            return A[i*(i-1)/2 + j-1];
        }
        return A[j * (j - 1) / 2 + i - 1];
    }

    void Display(){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n ; j++){1
                if(i>=j){
                    cout<<A[i*(i-1)/2+j-1]<<" ";
                }
                else {
                    cout<<A[j*(j-1)/2+i-1]<<" ";
                }
            }
            cout<<endl;
        }
    }
    ~SymMatrix(){
        delete [] A;
    }
};

int main(){
    SymMatrix D(3);
    int x;
    for(int i = 1 ; i<=3 ; i++){
        for(int j = 1 ; j<=3 ; j++){
            cin>>x;
            D.Set(i,j,x);
        }    
    }

    D.Display();

    return 0;
}   