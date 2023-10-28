// #include<iostream>
// using namespace std;

// int main(){
//     int a= 10; 
//     int b = a; 
//     int c =20; 
//     a = c; 
//     cout <<b; 
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int a= 10; 
    int &b = a; 
    // cout<<b<<endl;
    // cout<<a<<endl; 
    int c =20; 
    a = c;
    a=55;
    b=63; 
    cout<<b<<endl;  
    cout<<a<<endl;   
    return 0;
}

//   Step by Step Approach of above code

/*

Here's a step-by-step breakdown:

int a = 10;: Declare an integer variable named 'a' and initialize it with the value 10.

int &b = a;: Declare an integer reference named 'b' that is bound to the variable 'a'. This means 'b' is an alias for 'a', and any changes made to 'b' will affect 'a' and vice versa.

int c = 20;: Declare an integer variable named 'c' and initialize it with the value 20.

a = c;: Assign the value of 'c' (which is 20) to the variable 'a'. Since 'b' is a reference to 'a', this also updates the value of 'b' to 20.

cout << b << endl;: Print the value referred to by 'b', which is now 20 after the assignment.

cout << a << endl;: Print the value of 'a', which is also 20 after the assignment.

*/
