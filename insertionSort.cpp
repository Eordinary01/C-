#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];

        // elements to be inserted
        int j = i - 1;

        // condition to swap the position of no which are greated then key

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // insert the key value in correct pos
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    int arr[] = {45, 65, 78, 98, 75, 12, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: " << endl;
    printArray(arr, n);
    insertionSort(arr, n);

    cout << "Sorted Array: " << endl;

    printArray(arr, n);

    return 0;
}