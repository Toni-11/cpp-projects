#include <iostream>
#include <cctype>
#include <limits>

using namespace std;

int main()
{
    int numCourses;

    cout << "Enter the number of courses: ";
    while (!(cin >> numCourses) || numCourses <= 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a positive number of courses: ";
    }

    double totalPoints = 0.0;
    int totalCredits = 0;

    for (int i = 0; i < numCourses; i++)
    {
        char grade;
        int credits;

        cout << "\nEnter grade for course " << (i + 1)
             << " (A, B, C, D, F): ";
        cin >> grade;

        grade = static_cast<char>(toupper(static_cast<unsigned char>(grade)));

        while (grade != 'A' && grade != 'B' &&
               grade != 'C' && grade != 'D' &&
               grade != 'F')
        {
            cout << "Invalid grade. Please enter A, B, C, D, or F: ";
            cin >> grade;
            grade = static_cast<char>(
                toupper(static_cast<unsigned char>(grade))
            );
        }

        cout << "Enter credit hours for course " << (i + 1) << ": ";
        while (!(cin >> credits) || credits <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter positive credit hours: ";
        }

        double gradePoint;

        switch (grade)
        {
            case 'A':
                gradePoint = 4.0;
                break;
            case 'B':
                gradePoint = 3.0;
                break;
            case 'C':
                gradePoint = 2.0;
                break;
            case 'D':
                gradePoint = 1.0;
                break;
            case 'F':
                gradePoint = 0.0;
                break;
            default:
                gradePoint = 0.0;
        }

        totalPoints += gradePoint * credits;
        totalCredits += credits;
    }

    double gpa = totalPoints / totalCredits;

    cout << "\nYour GPA is: " << gpa << endl;

    return 0;
}