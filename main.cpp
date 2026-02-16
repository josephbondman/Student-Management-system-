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
        if (choice == 1) {
            string idx, name;
            cout << "Enter index and name: ";
            cin >> idx >> name;
            students.push_back(Student(idx, name));
        } else if (choice == 2) {
            for (auto& s : students) s.display();
        }
    } while (choice != 3);
    return 0;
}