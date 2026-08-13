#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int a[MAX], n;

    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid size.\n";
        return 1;
    }

    for (int i = 0; i < n; ++i) cin >> a[i];

    int sum = 0, mn = a[0], mx = a[0];
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (a[i] < mn) mn = a[i];
        if (a[i] > mx) mx = a[i];
    }

    cout << "Array: ";
    for (int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << "\nMin = " << mn << "\nMax = " << mx
         << "\nAverage = " << static_cast<double>(sum) / n << '\n';

    return 0;
}
