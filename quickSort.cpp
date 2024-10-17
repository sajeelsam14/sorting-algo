#include <iostream>
using namespace std;

int partition(int *arr, int low, int high)
{
    int piviot = low;
    int i = low + 1, j = high;
    do
    {
        while (arr[i] <= piviot)
        {
            i++;
        }
        while (arr[j] >= piviot)
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;

    return j;
}

void quickSort(int *arr, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}