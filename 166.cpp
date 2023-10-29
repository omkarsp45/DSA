// Sparse Matrix using istream ostream

#include <iostream>
using namespace std;

class Element
{
public:
    int i;
    int j;
    int x;
};

class Sparse
{
private:
    int m;
    int n;
    int num;
    Element *E;

public:
    Sparse(int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        E = new Element[this->num];
    }
    ~Sparse()
    {
        delete[] E;
    }

    friend istream &operator>>(istream &is, Sparse &s);
    friend ostream &operator<<(ostream &os, Sparse &s);
};

istream &operator>>(istream &is, Sparse &s)
{
    for (int i = 0; i < s.num; i++)
    {
        cin >> s.E[i].i >> s.E[i].j >> s.E[i].x;
    }
    return is ; 
}

ostream &operator<<(ostream &os, Sparse &s)
{
    int k = 0;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
            if (s.E[k].i == i && s.E[k].j == j)
            {
                cout << s.E[k++].x << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return os; 
}

int main()
{
    Sparse S(4, 4, 4);
    cin >> S;
    cout << S;
    return 0;
}