#include <iostream>
using namespace std;

int partition(int arr[], int lb, int up)
{
    int pivot = arr[lb];
    int i = lb, j = up;

    while (i < j)
    {
        while (i <= up && arr[i] <= pivot)
            i++;
        while (j >= lb && arr[j] > pivot)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[lb], arr[j]);
    return j;
}

void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int arr[] = {5, 3, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
