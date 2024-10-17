#include <iostream>
using namespace std;

void merge(int *arr, int mid, int low, int high)
{
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    int *left = new int[leftSize];
    int *right = new int[rightSize];

    for (int i = 0; i < leftSize; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < rightSize; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }

    while (i < leftSize)
    {
        arr[k++] = left[i++];
    }
    while (j < rightSize)
    {
        arr[k++] = right[j++];
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

int main()
{
    int arr[] = {0, 19, 4, 8, 3, 2, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, length - 1);

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
