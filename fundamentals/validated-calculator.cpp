#include <iostream>
#include <limits>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    while (!(cin >> a)) {
        cout << "Invalid input. Enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    while (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Invalid operator. Enter +, -, *, or /: ";
        cin >> op;
    }

    cout << "Enter second number: ";
    while (!(cin >> b)) {
        cout << "Invalid input. Enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (op == '/' && b == 0) {
        cout << "Error: division by zero is not allowed.\n";
        return 1;
    }

    double result;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        default:  result = a / b;
    }

    cout << "Result = " << result << '\n';
    return 0;
}
