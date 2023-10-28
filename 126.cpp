// Finding Dups in Unsorted Array

#include <iostream>
using namespace std;

void FindDups(int *A, int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == -1)
        {
            cout << "";
        }
        else
        {
            count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    A[j] = -1;
                    count++;
                }
            }
            if (count > 1)
            {
                cout << A[i] << " is appearing " << count << " times in Array" << endl;
            }
        }
    }
}

int main()
{
    int A[] = {3, 5, 2, 7, 3, 8, 2, 5, 9, 7, 4, 1, 6, 4, 8, 1, 6, 9, 3, 5, 2, 7, 3, 8, 2, 5, 9, 7, 4, 1, 6, 4, 8, 1, 6, 9, 3, 5, 2, 7, 3, 8, 2, 5, 9, 7, 4, 1, 6};
    int n = sizeof(A) / sizeof(int);
    FindDups(A, n);
    
    return 0;
}