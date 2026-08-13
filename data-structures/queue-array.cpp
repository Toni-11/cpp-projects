#include <iostream>
using namespace std;

class Queue {
    static const int MAX = 100;
    int a[MAX];
    int frontIndex = 0, rearIndex = -1;
public:
    bool isEmpty() const { return rearIndex < frontIndex; }

    void enqueue(int value) {
        if (rearIndex == MAX - 1) { cout << "Queue is full\n"; return; }
        a[++rearIndex] = value;
    }

    void dequeue() {
        if (isEmpty()) { cout << "Queue is empty\n"; return; }
        cout << "Dequeued: " << a[frontIndex++] << '\n';
    }

    void front() const {
        if (isEmpty()) cout << "Queue is empty\n";
        else cout << "Front: " << a[frontIndex] << '\n';
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.front();
    q.dequeue();
    q.front();
}
