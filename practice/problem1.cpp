#include <bits/stdc++.h>
using namespace std;

class Employee {
    double empid;
    static int totalemployees;
    public:
        Employee() {
            totalemployees++;
        }

        void assignID(double id) {
            this->empid = id;
            return;
        }

        void displayID() {
            cout << empid << "\n";
            return;
        }

        static void displayTotalEmployees() {
            cout << totalemployees << "\n";
            return;
        }

        ~Employee() {
            cout << "Resources are freed" << "\n";
        }
};

int Employee::totalemployees = 0;

int main() {
    Employee e1,e2,e3;
    e1.assignID(1.23);
    e2.assignID(2.34);
    e3.assignID(3.45);

    e1.displayID();
    e2.displayID();
    e3.displayID();

    e1.displayTotalEmployees();
    e2.displayTotalEmployees();
    e3.displayTotalEmployees();

    cout << "End" << "\n";

    return 0;
}