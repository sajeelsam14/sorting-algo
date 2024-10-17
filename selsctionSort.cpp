#include <iostream>

using namespace std;

void swap(int *arr, int index, int replace)
{
    int temp = arr[index];
    arr[index] = arr[replace];
    arr[replace] = temp;
}
void selectionSort(int *arr, int length)
{
    int minIndex;
    for (int i = 0; i < length - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }

        swap(arr, i, minIndex);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {3, 5, 0, 2, 9};
    printArray(arr, sizeof(arr) / sizeof(int));
    selectionSort(arr, sizeof(arr) / sizeof(int));
    printArray(arr, sizeof(arr) / sizeof(int));
}