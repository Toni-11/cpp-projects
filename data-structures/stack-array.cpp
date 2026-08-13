#include <iostream>
using namespace std;

class Stack {
    static const int MAX = 100;
    int a[MAX];
    int topIndex = -1;
public:
    bool isEmpty() const { return topIndex == -1; }
    bool isFull() const { return topIndex == MAX - 1; }

    void push(int value) {
        if (isFull()) { cout << "Stack overflow\n"; return; }
        a[++topIndex] = value;
    }

    void pop() {
        if (isEmpty()) { cout << "Stack underflow\n"; return; }
        cout << "Popped: " << a[topIndex--] << '\n';
    }

    void peek() const {
        if (isEmpty()) cout << "Stack is empty\n";
        else cout << "Top: " << a[topIndex] << '\n';
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.peek();
    s.pop();
    s.peek();
}
