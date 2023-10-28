#include <iostream>
using namespace std;

class TriDia
{
private:
    int n;
    int *A;

public:
    TriDia(int n)
    {
        this->n = n;
        A = new int[3 * n - 2];
    }

    void Set(int i, int j, int x)
    {
        if (i - j == 1)
        {
            A[i - 2] = x;
        }
        else if (i == j)
        {
            A[n - 1 + i - 1] = x;
        }
        else if (j - i == 1)
        {
            A[2 * n - 2 + i - 1] = x;  // Corrected the index calculation here
        }
    }

    void Display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i - j == 1)
                {
                    cout << A[i - 2] << " ";
                }
                else if (i == j)
                {
                    cout << A[n - 1 + i - 1] << " ";
                }
                else if (j - i == 1)
                {
                    cout << A[2 * n - 2 + i - 1] << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    }

    ~TriDia()
    {
        delete[] A;
    }
};

int main()
{
    TriDia D(3);
    int x;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> x;
            D.Set(i, j, x);
        }
    }

    D.Display();
    return 0;
}
