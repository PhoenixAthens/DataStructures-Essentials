#include <iostream>
#include <string>
using namespace std;

class Staff {
protected:
    int code;
    string name;
public:
    Staff(int c, string n) : code(c), name(n) {}
    void display() {
        cout << "Code: " << code << "\nName: " << name << endl;
    }
};

class Faculty : public Staff {
    string department;
    string subject;
    string researchArea;
public:
    Faculty(int c, string n, string d, string s, string r)
        : Staff(c, n), department(d), subject(s), researchArea(r) {}
    void display() {
        Staff::display();
        cout << "Department: " << department << "\nSubject: " << subject << "\nResearch Area: " << researchArea << endl;
    }
};

class Officer : public Staff {
    string rank;
    string grade;
public:
    Officer(int c, string n, string r, string g)
        : Staff(c, n), rank(r), grade(g) {}
    void display() {
        Staff::display();
        cout << "Rank: " << rank << "\nGrade: " << grade << endl;
    }
};

class Typist : public Staff {
protected:
    string office;
    int speed;
public:
    Typist(int c, string n, string o, int s)
        : Staff(c, n), office(o), speed(s) {}
    void display() {
        Staff::display();
        cout << "Office: " << office << "\nTyping Speed: " << speed << " WPM" << endl;
    }
};

class Permanent : public Typist {
    double salary;
public:
    Permanent(int c, string n, string o, int s, double sal)
        : Typist(c, n, o, s), salary(sal) {}
    void display() {
        Typist::display();
        cout << "Salary: " << salary << endl;
    }
};

class Casual : public Typist {
    double dailyWages;
public:
    Casual(int c, string n, string o, int s, double w)
        : Typist(c, n, o, s), dailyWages(w) {}
    void display() {
        Typist::display();
        cout << "Daily Wages: " << dailyWages << endl;
    }
};

int main() {
    Faculty facultyMember(1, "KJ", "CS", "DSA", "ML/AI");
    Officer officerMember(2, "Vice", "Senior", "A");
    Permanent permanentTypist(3, "Allen", "Main Office", 80, 50000);
    Casual casualTypist(4, "Alice", "Branch Office", 70, 300);
    cout << "Faculty Member Details:\n";
    facultyMember.display();
    cout << "\nOfficer Member Details:\n";
    officerMember.display();
    cout << "\nPermanent Typist Details:\n";
    permanentTypist.display();
    cout << "\nCasual Typist Details:\n";
    casualTypist.display();

    return 0;
}
