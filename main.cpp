#include <iostream>
#include <vector>
#include <string>
#include <map> // 1. Added missing header

using namespace std;

// 2. Define your classes at the TOP
class Student {
public:
    string indexNumber;
    string name;
    Student(string idx, string n) : indexNumber(idx), name(n) {}
    void display() {
        cout << "Index: " << indexNumber << ", Name: " << name << endl;
    }
};

class AttendanceSession {
public:
    string courseCode;
    string date;
    map<string, string> attendance;
    
    AttendanceSession(string cc, string d) : courseCode(cc), date(d) {}
    
    // 3. Declare the method inside the class
    void markAttendance(string index, string status);
};

// Define the method
void AttendanceSession::markAttendance(string index, string status) {
    attendance[index] = status;
}

int main() {
    vector<Student> students;
    vector<AttendanceSession> sessions; // Declare sessions vector
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Register student\n2. Create Attendance Session\n3. View students\n4. Mark Attendance\n5. Summary\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) { // 4. All "cases" must be inside this switch
            case 1: {
                string idx, name;
                cout << "Enter index: "; cin >> idx;
                cout << "Enter name: "; cin.ignore(); getline(cin, name);
                students.push_back(Student(idx, name));
                break;
            }
            case 2: {
                sessions.push_back(AttendanceSession("EE201", "2026-02-20"));
                cout << "Session created!\n";
                break;
            }
            case 3: {
                for (auto& s : students) s.display();
                break;
            }
            case 4: {
                if (students.empty()) {
                    cout << "No students available.\n";
                } else {
                    cout << "Enter student index (0 to " << students.size()-1 << "): ";
                    int idx; cin >> idx;
                    if (idx >= 0 && idx < students.size()) {
                        cout << "Status (P/A/L): ";
                        string status; cin >> status;
                        // Use the first session as an example
                        if (!sessions.empty()) sessions[0].markAttendance(students[idx].indexNumber, status);
                    }
                }
                break;
            }
            case 5: {
                cout << "Attendance Summary logic goes here.\n";
                break;
            }
        }
    } while (choice != 6);

    return 0;
}
