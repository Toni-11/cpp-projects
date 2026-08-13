#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size.\n";
        return 1;
    }

    int* a = new int[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

    cout << "Values: ";
    for (int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';

    delete[] a;
    a = nullptr;

    return 0;
}
