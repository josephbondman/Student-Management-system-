#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string indexNumber;
    string name;
    Student(string idx, string n) : indexNumber(idx), name(n) {}
    void display() {
        cout << "Index: " << indexNumber << ", Name: " << name << endl;
    }
};

int main() {
    vector<Student> students;
    int choice;
    do {
        cout << "1. Register student\n2. View students\n3. Exit\n";
        cin >> choice;
        cin.ignore(); // Handle newline
        if (choice == 1) {
            string idx, name;
            cout << "Enter index number: ";
            cin >> idx;
            cout << "Enter name: ";
            getline(cin, name); // Allow spaces in name
            students.push_back(Student(idx, name));
        } else if (choice == 2) {
            if (students.empty()) {
                cout << "No students registered.\n";
            } else {
                for (auto& s : students) s.display();
            }
        }
    } while (choice != 3);
    return 0;
}

class AttendanceSession {
public:
    string courseCode;
    string date;
    map<string, string> attendance;
    AttendanceSession(string cc, string d);
};
case 2: // Attendance
    cout << "1. Create Session\n";
    if (subChoice == 1) {
        sessions.push_back(AttendanceSession("EE201", "2026-02-20"));
    }
    break;

void AttendanceSession::markAttendance(string index, string status) {
    attendance[index] = status;
}

// Assuming an AttendanceSession class (from Image 3, 5.2 and Image 4 Week 2)
// In the menu:
case 4: {
    // Select a session and student, then mark attendance
    std::cout << "Mark attendance (P for Present, A for Absent, L for Late): ";
    char status;
    std::cin >> status;
    // Logic to mark attendance based on status
    break;
}
