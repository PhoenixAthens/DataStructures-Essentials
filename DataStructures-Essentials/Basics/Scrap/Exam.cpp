#include <iostream>
#include <string>
using namespace std;
class Student {
    protected:
        int rollno;
        string name;
        string course;
    public:
        void input_student() {
            cout << "Enter Roll Number: ";
            cin >> rollno;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Course: ";
            getline(cin, course);
        }
        void display_student() const {
            cout << "\nRoll Number: " << rollno;
            cout << "\nName: " << name;
            cout << "\nCourse: " << course << endl;
        }
};
class Exam : public Student {
    private:
        float mark1, mark2, mark3;
    public:
        void input_marks() {
            cout << "Enter marks for three subjects:\n";
            cout << "Mark 1: ";
            cin >> mark1;
            cout << "Mark 2: ";
            cin >> mark2;
            cout << "Mark 3: ";
            cin >> mark3;
        }

        void display_result() const {
            display_student();
            cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
            float total = mark1 + mark2 + mark3;
            float average = total / 3;
            cout << "Total: " << total << "\nAverage: " << average << endl;
        }
};

int main() {
    const int num_students = 5;
    Exam students[num_students];
    
    for(int i = 0; i < num_students; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].input_student();
        students[i].input_marks();
    }

    cout << "\nDisplaying student results:\n";
    for(int i = 0; i < num_students; i++) {
        cout << "\nDetails of student " << i + 1 << ":\n";
        students[i].display_result();
    }

    return 0;
}
