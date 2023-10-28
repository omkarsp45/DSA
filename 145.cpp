#include <iostream>
using namespace std;

// Matrix using Class

class DiagonalMatrix{
private:
    int n;
    int *A;

public:
    DiagonalMatrix(int n)
    {
        this->n = n;
        A = new int[n];
    }

    void Set(int i, int j, int x)
    {
        if (i == j)
        {
            A[i - 1] = x;
        }
    }

    int Get(int i , int j ){
        if(i==j){
            return A[i-1];
        }
        else{
            return 0;
        }
    }

    void Display(){
        for(int i=0; i<n; i++){
            for(int j=0; j<n ; j++){
                if(i==j){
                    cout<<A[i]<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }
    ~DiagonalMatrix(){
        delete [] A;
    }
};

int main(){
    DiagonalMatrix D(3);
    D.Set(1,1,5);
    D.Set(2,2,8);
    D.Set(3,3,2);
    // cout<<D.Get(3,3);
    D.Display();
    return 0;
}   