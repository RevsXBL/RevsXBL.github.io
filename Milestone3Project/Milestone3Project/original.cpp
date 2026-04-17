#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
using namespace std;

// =====================================================
// ORIGINAL VERSION - CS300 COURSE PLANNING PROGRAM
// This version demonstrates basic use of a map data
// structure and file input to store and retrieve courses.
// =====================================================

struct Course {
    string courseNumber;
    string courseTitle;
    vector<string> prerequisites;
};

void loadCourseData(map<string, Course>& courses) {
    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    ifstream file(filename);

    if (!file) {
        cout << "Error: Could not open file." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        Course course;
        string prerequisite;

        getline(ss, course.courseNumber, ',');
        getline(ss, course.courseTitle, ',');

        while (getline(ss, prerequisite, ',')) {
            course.prerequisites.push_back(prerequisite);
        }

        courses[course.courseNumber] = course;
    }

    file.close();
}

void displayMenu() {
    cout << "\nMenu Options:\n";
    cout << "1. Load course data\n";
    cout << "2. Print course list\n";
    cout << "3. Print course information\n";
    cout << "9. Exit\n";
    cout << "Enter your choice: ";
}

void printCourseList(const map<string, Course>& courses) {
    for (const auto& course : courses) {
        cout << course.second.courseNumber << ": "
            << course.second.courseTitle << endl;
    }
}

void printCourseInfo(const map<string, Course>& courses) {
    string courseNumber;
    cout << "Enter course number: ";
    cin >> courseNumber;

    auto it = courses.find(courseNumber);

    if (it != courses.end()) {
        cout << "Course: " << it->second.courseTitle << endl;
        cout << "Prerequisites: ";
        for (const string& prereq : it->second.prerequisites) {
            cout << prereq << " ";
        }
        cout << endl;
    }
    else {
        cout << "Course not found." << endl;
    }
}

// =====================================================
// MAIN FUNCTION DISABLED FOR PROJECT BUILD
// Prevents multiple main() error in Visual Studio
// =====================================================

/*
int main() {
    map<string, Course> courses;
    int choice = 0;

    while (choice != 9) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            loadCourseData(courses);
        }
        else if (choice == 2) {
            printCourseList(courses);
        }
        else if (choice == 3) {
            printCourseInfo(courses);
        }
        else if (choice == 9) {
            cout << "Exiting program." << endl;
        }
        else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
*/