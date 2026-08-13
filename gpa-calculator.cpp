#include <iostream>
#include <limits>
#include <string>
#include <cctype>

using namespace std;

double gradeToPoints(char grade) {
    switch (static_cast<char>(toupper(static_cast<unsigned char>(grade)))) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return -1.0;
    }
}

int main() {
    int numCourses;
    double totalCredits = 0.0;
    double totalPoints = 0.0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    while (cin.fail() || numCourses <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid number of courses. Enter a positive number: ";
        cin >> numCourses;
    }

    for (int i = 0; i < numCourses; ++i) {
        string courseName;
        int creditHours;
        char grade;

        cout << "Enter course name: ";
        cin >> courseName;

        cout << "Enter credit hours: ";
        cin >> creditHours;
        while (cin.fail() || creditHours <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Credit hours must be positive. Try again: ";
            cin >> creditHours;
        }

        cout << "Enter grade (A, B, C, D, F): ";
        cin >> grade;
        double gradePoints = gradeToPoints(grade);

        while (gradePoints < 0.0) {
            cout << "Invalid grade. Enter A, B, C, D, or F: ";
            cin >> grade;
            gradePoints = gradeToPoints(grade);
        }

        totalCredits += creditHours;
        totalPoints += creditHours * gradePoints;
    }

    const double gpa = totalPoints / totalCredits;
    cout << "Your GPA is: " << gpa << '\n';

    return 0;
}
