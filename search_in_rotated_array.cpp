#include <iostream>

using namespace std;

int search(int arr[], int n, int key)
{
    // Find the pivot point.
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > arr[high])
        {
            // The pivot point is in the right sub-array.
            low = mid + 1;
        }
        else
        {
            // The pivot point is in the left sub-array.
            high = mid - 1;
        }
    }

    // The element is not found.
    return -1;
}

int main()
{
    int arr[] = {5, 6, 7, 8, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int index = search(arr, n, key);

    if (index == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found at index: " << index << endl;
    }

    return 0;
}
