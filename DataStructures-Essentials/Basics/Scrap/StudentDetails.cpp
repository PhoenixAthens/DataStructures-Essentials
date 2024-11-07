#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int rollno;
        string name;
        float mark1, mark2, mark3, total, average;
    
    public:
        void getdata() {
            cout << "Enter Roll Number: ";
            cin >> rollno;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter marks for three subjects:\n";
            cout << "Mark 1: ";
            cin >> mark1;
            cout << "Mark 2: ";
            cin >> mark2;
            cout << "Mark 3: ";
            cin >> mark3;
            
            total = mark1 + mark2 + mark3;
            average = total / 3;
        }
        
        void displaydata() {
            cout << "\nRoll Number: " << rollno;
            cout << "\nName: " << name;
            cout << "\nMarks: " << mark1 << ", " << mark2 << ", " << mark3;
            cout << "\nTotal: " << total;
            cout << "\nAverage: " << average << endl;
        }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[n];
    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].getdata();
    }
    cout << "\nDisplaying student details:\n";
    for(int i = 0; i < n; i++) {
        cout << "\nDetails of student " << i + 1 << ":\n";
        students[i].displaydata();
    }
    return 0;
}
