#include <iostream>
using namespace std;

// Matrix using Class

class LowerTri{
private:
    int n;
    int *A;

public:
    LowerTri(int n)
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
    }

    int Get(int i , int j ){
        if(i>=j){
            return A[i*(i-1)/2 + j-1];
        }
        return 0;
    }

    void Display(){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n ; j++){
                if(i>=j){
                    cout<<A[i*(i-1)/2+j-1]<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }
    ~LowerTri(){
        delete [] A;
    }
};

int main(){
    LowerTri D(3);
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