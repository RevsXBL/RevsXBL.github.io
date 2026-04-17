#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct Course {
    string courseNumber;
    string courseTitle;
    vector<string> prerequisites;
};

string toUpperCase(string text) {
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    return text;
}

bool loadCourseDataEnhanced(map<string, Course>& courses) {
    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Unable to open file." << endl;
        return false;
    }

    courses.clear();
    string line;

    while (getline(file, line)) {
        if (line.empty()) {
            continue;
        }

        stringstream ss(line);
        Course course;
        string prereq;

        getline(ss, course.courseNumber, ',');
        getline(ss, course.courseTitle, ',');

        course.courseNumber = toUpperCase(course.courseNumber);

        while (getline(ss, prereq, ',')) {
            if (!prereq.empty()) {
                course.prerequisites.push_back(toUpperCase(prereq));
            }
        }

        courses[course.courseNumber] = course;
    }

    cout << "Course data successfully loaded." << endl;
    return true;
}

void displayMenuEnhanced() {
    cout << "\nMenu Options:\n";
    cout << "1. Load course data\n";
    cout << "2. Print course list\n";
    cout << "3. Print course information\n";
    cout << "9. Exit\n";
    cout << "Enter your choice: ";
}

void printCourseListEnhanced(const map<string, Course>& courses) {
    if (courses.empty()) {
        cout << "No course data loaded." << endl;
        return;
    }

    for (const auto& pair : courses) {
        cout << pair.second.courseNumber << ": " << pair.second.courseTitle << endl;
    }
}

void printCourseInfoEnhanced(const map<string, Course>& courses) {
    if (courses.empty()) {
        cout << "No course data loaded." << endl;
        return;
    }

    string courseNumber;
    cout << "Enter course number: ";
    cin >> courseNumber;
    courseNumber = toUpperCase(courseNumber);

    auto course = courses.find(courseNumber);

    if (course == courses.end()) {
        cout << "Course not found." << endl;
        return;
    }

    cout << "\nCourse Number: " << course->second.courseNumber << endl;
    cout << "Course Title: " << course->second.courseTitle << endl;

    if (course->second.prerequisites.empty()) {
        cout << "Prerequisites: None" << endl;
    }
    else {
        cout << "Prerequisites: ";
        for (size_t i = 0; i < course->second.prerequisites.size(); ++i) {
            cout << course->second.prerequisites[i];
            if (i < course->second.prerequisites.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
}

int getValidatedChoice() {
    int choice;

    if (!(cin >> choice)) {
        cin.clear();
        cin.ignore(1000, '\n');
        return -1;
    }

    return choice;
}

int main() {
    map<string, Course> courses;
    int choice = 0;

    while (choice != 9) {
        displayMenuEnhanced();
        choice = getValidatedChoice();

        switch (choice) {
        case 1:
            loadCourseDataEnhanced(courses);
            break;
        case 2:
            printCourseListEnhanced(courses);
            break;
        case 3:
            printCourseInfoEnhanced(courses);
            break;
        case 9:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }

    return 0;
}