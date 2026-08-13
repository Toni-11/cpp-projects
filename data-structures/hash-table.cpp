#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> scores;

    scores["Alice"] = 90;
    scores["Bob"] = 85;
    scores["Charlie"] = 95;

    string name;
    cout << "Enter student name: ";
    cin >> name;

    auto it = scores.find(name);
    if (it != scores.end())
        cout << "Score: " << it->second << '\n';
    else
        cout << "Student not found.\n";
}
