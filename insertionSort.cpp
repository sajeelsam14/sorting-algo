#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertionSort(int *arr, int length)
{
    int j, key;
    for (int i = 1; i < length; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {4, 3, 0, 2, 1};
    printArray(arr, sizeof(arr) / sizeof(int));
    insertionSort(arr, sizeof(arr) / sizeof(int));
    printArray(arr, sizeof(arr) / sizeof(int));
    return 0;
}