// #include<iostream>
// using namespace std;

// int fibo(int n){
//     if(n<=1){
//         return n; 
//     }
//     return fibo(n-2) + fibo(n-1);  
// }
// int main(){
//     int x = 7;
//     cout<<fibo(x);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int d = 0 , n = 7;
//     for (int i = 0; i < n; i++)
//     {
//         static int c , a = 0 ;
//         static int b = 1 ;
//         cout<<a<<" ";
//         d +=a; 
//         c = a+b;
//         a = b;
//         b = c;
//     }
//     cout<<endl<<d;
//     return 0;
// }

// Recursion (memoization)
// To Reduce No. of calls 
#include<iostream>
using namespace std;

int F[10] ;

int Fib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            Fib(n-2);
        }
        if(F[n-1]==-1){
            Fib(n-1);
        }
        F[n] = F[n-2] + F[n-1];
        return Fib(n-2) + Fib(n-1);
    }
}

int main(){
    int n ;
    cout<<"Enter the no. of fibo digits you want : ";
    cin>>n;
    for(int i = 0; i<n; i++){
        F[i]=-1;
    }
    Fib(n);  
    for(int i = 0; i<n; i++){
        cout<<F[i]<<" ";
    }
    return 0;
}