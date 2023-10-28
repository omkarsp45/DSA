// Iterative Method Of Binary Search Algorithm

#include <iostream>
using namespace std;

class FindElement
{
private:
    int *arr, mid;

public:
    void setArray(int size)
    {
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter Element : ";
            cin >> arr[i];
        }
    }
    int find(int low, int high, int key)
    {
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                high = mid - 1;
            }
            else if (arr[mid] < key)
            {
                low = mid + 1;
            }
        }
        return -1;
    }

    ~FindElement(){
        delete[] arr;
    }
};

int main()
{
    FindElement F;
    int size;
    cout << "Enter Size Of Array : ";
    cin >> size;
    cout << "Give Sorted List : \n";
    F.setArray(size);
    int num;
    cout << "Number You Want To Find : ";
    cin>>num;
    int index = F.find(0, size - 1, num);
    if (index != -1)
    {
        cout << "Element Found At : " << index;
    }
    else
    {
        cout << "Element Not Found";
    }
    return 0;
}
