// GBA_Calculaitor_system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream> 
using namespace std;

int main()
{
    int numCourses = 0;
    float totalPoints = 0.0;
    float totalCredits = 0.0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; i++)
    {
        char grade = ' ';
        int credits = 0;

        cout << "Enter grade for course " << (i + 1) << " (A, B, C, D, F): ";
        cin >> grade;

        while (grade < 'A' || grade > 'F')
        {
            cout << "Invalid grade entered. Please try again " << endl;
            cout << "Enter grade for course " << (i + 1) << " (A, B, C, D, F): ";
            cin >> grade;
        }
        cout << "Enter credit hours for course " << (i + 1) << ": ";
        cin >> credits;

        float gradePoint = 0;

        if (grade == 'A' || grade == 'a')
        {
            gradePoint = 4.0;
        }
        else if (grade == 'B' || grade == 'b')
        {
            gradePoint = 3.0;
        }
        else if (grade == 'C' || grade == 'c')
        {
            gradePoint = 2.0;
        }
        else if (grade == 'D' || grade == 'd')
        {
            gradePoint = 1.0;
        }
        else if (grade == 'F' || grade == 'f')
        {
            gradePoint = 0.0;
        }

        totalPoints += gradePoint * credits;
        totalCredits += credits;
    }

    float gpa = (totalCredits > 0) ? (totalPoints / totalCredits) : 0.0;

    cout << "Your GPA is: " << gpa << endl;

    return 0;
}