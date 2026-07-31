#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    int id;
    vector<double> scores;
};

double calculateAverage(const Student& student)
{
    if (student.scores.empty())
        return 0.0;

    double sum = 0;

    for (double score : student.scores)
        sum += score;

    return sum / student.scores.size();
}

void addStudent(vector<Student>& students)
{
    Student student;
    int count;

    cin.ignore();

    cout << "Student name: ";
    getline(cin, student.name);

    cout << "Student ID: ";
    cin >> student.id;

    cout << "How many scores? ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        double score;
        cout << "Enter score " << i + 1 << ": ";
        cin >> score;
        student.scores.push_back(score);
    }

    students.push_back(student);

    cout << "Student \"" << student.name << "\" added successfully." << endl;
}

void displayStudents(const vector<Student>& students)
{
    if (students.empty())
    {
        cout << "No students have been added yet." << endl;
        return;
    }

    cout << fixed << setprecision(2);

    for (const Student& student : students)
    {
        cout << "\nName: " << student.name << endl;
        cout << "ID: " << student.id << endl;
        cout << "Scores: ";

        for (double score : student.scores)
            cout << score << " ";

        cout << "\nAverage: " << calculateAverage(student) << endl;
    }
}

void findAverage(const vector<Student>& students)
{
    int id;
    cout << "Enter student ID: ";
    cin >> id;

    for (const Student& student : students)
    {
        if (student.id == id)
        {
            cout << fixed << setprecision(2);
            cout << student.name << "'s average score: "
                 << calculateAverage(student) << endl;
            return;
        }
    }

    cout << "Student ID not found." << endl;
}

int main()
{
    vector<Student> students;
    int choice;

    do
    {
        cout << "\n================================" << endl;
        cout << "   STUDENT RECORD SYSTEM MENU" << endl;
        cout << "================================" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Calculate average score" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent(students);
                break;

            case 2:
                displayStudents(students);
                break;

            case 3:
                findAverage(students);
                break;

            case 4:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}