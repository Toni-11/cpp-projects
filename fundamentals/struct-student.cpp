#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    double grade;
};

int main() {
    Student s;

    cout << "Name: ";
    getline(cin >> ws, s.name);
    cout << "Age: ";
    cin >> s.age;
    cout << "Grade: ";
    cin >> s.grade;

    cout << "\nStudent Information\n";
    cout << "Name: " << s.name << "\nAge: " << s.age
         << "\nGrade: " << s.grade << '\n';

    return 0;
}
