#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>  //or <stdlib.h>
using namespace std;

struct Rect{
    int l; 
    int b;  
};
int main(){
    // Rect r = {2,3};
    // Rect *p = &r; 
    // cout<<r.l<<endl; 
    // cout<<(*p).l<<endl;
    // cout<<p->l<<endl;

    Rect *p;
    // p = (Rect*)malloc(sizeof(Rect));   //OR
    p = new Rect;
    cin>>(*p).l;
    cout<<p->l;
    return 0;
}