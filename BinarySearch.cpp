#include <iostream>
using namespace std;

int binarySearch(int arr[], int n,int num)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, num;

    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements(sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> num;

    int result = binarySearch(arr, n, num);

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}