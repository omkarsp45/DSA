#include <iostream>
using namespace std;

void findDups(string a)
{
    for (int i = 0; i < a.length() - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < a.length(); j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = 1;
            }
        }
        if ((a[i] != 1)&& (count>1))
        {
            cout << a[i] << " : " << count << endl;
        }
    }
}
int main()
{
    string a = "oiwadjgiojhw";
    findDups(a);
    return 0;
}