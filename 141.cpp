#include <iostream>
using namespace std;

void perm(string S, int K, string Res, int A[]) {
    if (S[K] == '\0') {
        Res[K] = '\0';
        cout << Res << endl;
    } else {
        for (int i = 0; S[i] != '\0'; i++) {
            if (A[i] == 0) {
                Res[K] = S[i];
                A[i] = 1;
                perm(S, K + 1, Res, A);
                A[i] = 0;
            }
        }
    }
}

int main() {
    string S = "omkar";
    int K = S.length();
    int A[K] = {0};
    string Res(K, ' ');
    perm(S, 0, Res, A);
    return 0;
}
