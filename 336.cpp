// Sorting

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void BubbleSort(vector<int> &arr, int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        bool checkSorted = true;
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                checkSorted = false;
            }
        }
        if (checkSorted)
        {
            break;
        }
    }
}

void SelectionSort(vector<int> &arr, int N)
{
    for (int i = N - 1; i >= 0; i--)
    {
        int maxIndex = i;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
}

void InsertionSort(vector<int> &arr, int N)
{
    for (int i = 1; i < N; i++)
    {
        int element = arr[i];
        int j = i - 1;
        while (arr[j] > element && j > -1)
        {
            arr[j + 1] = arr[j--];
        }
        arr[j + 1] = element;
    }
}

void display(vector<int> arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {5, 3, 7, 2, 9, 8};
    display(arr, arr.size());
    BubbleSort(arr, arr.size());
    InsertionSort(arr, arr.size());
    SelectionSort(arr, arr.size());
    display(arr, arr.size());
    return 0;
}