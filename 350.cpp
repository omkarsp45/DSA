// Quick Sort

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[high], arr[i + 1]);
    return i + 1;
}

void QuickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int PartitionIndex = Partition(arr, 0, high);
        QuickSort(arr, 0, PartitionIndex - 1);
        QuickSort(arr, PartitionIndex + 1, high);
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
    vector<int> arr = {2, 4, 6, 3, 5, 1, 7, 9, 8};
    display(arr, 9);
    QuickSort(arr, 0, 8);
    display(arr, 9);
    return 0;
}