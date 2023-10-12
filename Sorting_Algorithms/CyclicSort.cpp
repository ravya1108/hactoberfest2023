#include <iostream>
#include <vector>

using namespace std;

void cyclicSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        while (arr[i] != i + 1) {
            if (arr[i] <= 0 || arr[i] > n || arr[i] == arr[arr[i] - 1]) {
                break;
            }
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 3, 1, 5};

    cyclicSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
