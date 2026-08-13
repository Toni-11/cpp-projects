#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin >> ws, s);

    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    cout << "Length: " << s.length() << '\n';
    cout << "Reversed: " << reversed << '\n';
    cout << "Palindrome: " << (s == reversed ? "Yes" : "No") << '\n';

    return 0;
}
