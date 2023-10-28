#include<iostream>
using namespace std;

int main(){
    char sentence[] = "My name is Omkar";
    int countV = 0 ; 
    int countC = 0 ; 
    for (int i = 0; sentence[i]!='\0' ; i++)
    {
        if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'||sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U'){
            countV++;
        }
        else if((sentence[i]>=65 && sentence[i]<=90)||(sentence[i]>=97 && sentence[i]<=122)){
            countC++;
        }
    }
    cout<<"No Of Vowels : "<<countV<<endl;
    cout<<"No Of Consontants : "<<countC<<endl;
    return 0;
}