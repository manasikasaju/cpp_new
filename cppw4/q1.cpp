#include <iostream>
using namespace std;

class Student {
private:
    string studentName;
    int studentID;
    static int totalStudents;

public:
    // Constructor
    Student(string name, int id) {
        studentName = name;
        studentID = id;
        totalStudents++; // Increase total student count
    }

    // Non-static method
    void displayStudentInfo() {
        cout << "Name: " << studentName << ", ID: " << studentID << endl;
    }

    // Static method
    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }
};

// Define static member outside the class
int Student::totalStudents = 0;

int main() {
    Student s1("Alice", 101);
