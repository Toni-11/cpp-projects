#include <iostream>
using namespace std;

int binarySearch(const int a[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int a[] = {2, 5, 8, 12, 16, 23, 38};
    int n = sizeof(a) / sizeof(a[0]);
    int target;

    cout << "Enter value to search: ";
    cin >> target;

    int index = binarySearch(a, n, target);
    cout << (index == -1 ? "Not found\n" : "Found at index " + to_string(index) + "\n");
}
