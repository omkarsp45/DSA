// For Unsorted Sets

// #include<iostream>
// using namespace std;

// void Union(int *A , int *B , int m , int n){
//     int C[m+n];
//     int Cindex=0;
//     for(int i = 0 ; i < n ; i++){
//         C[Cindex] = B[i];
//         Cindex++; 
//     }
//     for(int i = 0 ; i < m ; i++){
//         bool Found = false;
//         for(int j = 0 ; j < n ; j++){
//             if(A[i]==B[j]){
//                 Found = true;
//             }
//         }
//         if(!Found){
//             C[Cindex]=A[i];
//             Cindex++;
//         }
//     }
//     for(int i = 0 ; i<Cindex; i++){
//         cout<<C[i]<<" "; 
//     }
// }

// int main(){
//     int A[] = {1, 2, 3, 4};
//     int B[] = {3, 4, 5, 6};
//     int m = sizeof(A)/sizeof(int);
//     int n = sizeof(B)/sizeof(int);
//     Union(A, B, m, n);
//     return 0;
// }

// For Sorted Sets 

// #include<iostream>
// using namespace std;

// void Union(int *A , int *B , int m , int n){
//     int C[m+n];
//     int a = 0; 
//     int b = 0; 
//     int k = 0;  
//     for(int j=0 ; a < m || b < n ; j++){    while loop will be the best suit for this case 
//         if(a>m-1){
//             C[k]=B[b];
//             b++;
//             k++;
//         }
//         else if(b>n-1){
//             C[k]=A[a];
//             a++;
//             k++;
//         }
//         else if(A[a]<B[b]){
//             C[k]=A[a];
//             a++;
//             k++;
//         }
//         else if(A[a]>B[b]){
//             C[k]=B[b];
//             b++;
//             k++;
//         }
//         else if(A[a]==B[b]){
//             C[k]=A[a];
//             a++;
//             b++;
//             k++;
//         }
//     }

//     for(int i = 0 ; i<k; i++){
//         cout<<C[i]<<" "; 
//     }
// }

// int main(){
//     int A[] = {11,34,56,63,75};
//     int B[] = {13,29,34,59,63};
//     int m = sizeof(A)/sizeof(int);
//     int n = sizeof(B)/sizeof(int);
//     Union(A, B, m, n);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void Union(int *A, int *B, int m, int n) {
//     int C[m + n];
//     int a = 0;
//     int b = 0;
//     int k = 0;
//     while (a < m || b < n) {  // Corrected loop condition
//         if (a >= m) {
//             C[k] = B[b];
//             b++;
//         } else if (b >= n) {
//             C[k] = A[a];
//             a++;
//         } else if (A[a] < B[b]) {
//             C[k] = A[a];
//             a++;
//         } else if (A[a] > B[b]) {
//             C[k] = B[b];
//             b++;
//         } else if (A[a] == B[b]) {
//             C[k] = A[a];
//             a++;
//             b++;
//         }
//         k++;
//     }

//     for (int i = 0; i < k; i++) {
//         cout << C[i] << " ";
//     }
// }

// int main() {
//     int A[] = {11, 34, 56, 63, 75};
//     int B[] = {13, 29, 34, 59, 63};
//     int m = sizeof(A) / sizeof(int);
//     int n = sizeof(B) / sizeof(int);
//     Union(A, B, m, n);
//     return 0;
// }
