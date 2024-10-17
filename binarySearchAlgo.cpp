#include <iostream>
using namespace std;

int binarySearch(int arr[], int length, int num)
{
    int lb = 0, ub = length - 1, mid;

    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (num < arr[mid])
        {
            ub = mid - 1;
        }
        else if (num > arr[mid])
        {
            lb = mid + 1;
        }
        else
        {
            return arr[mid];
        }
    }

    return -1;
}

int main()
{
    int arr[] = {3, 5, 9, 10, 14};
    int res = binarySearch(arr, sizeof(arr) / sizeof(int), 20);
    if (res != -1)
    {
        cout << "Number is found: " << res;
        return 0;
    }
    cerr << "Number not found";
    return 0;
}