#include <iostream>
using namespace std;

bool checkAnagram(string A, string B){
    int H[26] = {};
    for (int i = 0; i < A.length(); i++){
        H[A[i] - 97]++;
    }
    for (int i = 0; i < B.length(); i++){
        if (H[B[i] - 97] > 0){
            H[B[i] - 97]--;
        }
        else{
            return false;
        }
    }
    for (int i = 0; i < 26; i++){
        if (H[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string A = "navin";
    string B = "ravin";
    if(checkAnagram(A , B)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}