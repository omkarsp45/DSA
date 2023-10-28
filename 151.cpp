#include <iostream>
using namespace std;

// Matrix using Class

class UpperTri{
private:
    int n;
    int *A;

public:
    UpperTri(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    void Set(int i, int j, int x)
    {
        if (i <= j)
        {
            A[j*(j-1)/2 + i - 1] = x;
        }
    }

    int Get(int i , int j ){
        if(i <= j){
            return A[j*(j-1)/2 + i-1];
        }
        return 0;
    }

    void Display(){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n ; j++){
                if(i <= j){
                    cout<<A[j*(j-1)/2+i-1]<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }
    ~UpperTri(){
        delete [] A;
    }
};

int main(){
    UpperTri D(3);
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