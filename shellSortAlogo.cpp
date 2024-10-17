#include <iostream>

using namespace std;

void shellShort(int *arr, int length)
{
    for (int gap = length - 1; gap >= 1; gap = gap / 2)
    {
        for (int j = gap; j <= length - 1; j++)
        {
            for (int i = j - gap; i >= 0; i -= gap)
            {
                if (arr[i + gap] < arr[i])
                {
                    int temp = arr[i + gap];
                    arr[i + gap] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
}

int main()
{
    int arr[] = {3, 6, 0, 9, 1, 2, 4, 3};
    shellShort(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}