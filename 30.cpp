#include<iostream>
using namespace std;

template <class T>
class Arithmetic{
    T a , b; 
    public: 
    Arithmetic(T a , T b);
    T add();
};    
   
    template <class T>   
    Arithmetic<T>::Arithmetic(T a , T b){
        this->a = a; 
        this->b = b; 
    } 
    template <class T>
    T Arithmetic<T>::add(){
        T c= a+b; 
        return c; 
    }
int main(){
    Arithmetic<int> a(12,13);
    cout<<a.add()<<endl;    
    Arithmetic<char> a1('A','B');
    cout<<(int)a1.add();
    return 0;
}