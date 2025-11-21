#include <iostream>
using namespace std;

class Time {
public:
    int *ptr;

    // Constructor
    Time(int n) {
        ptr = new int;
        *ptr = n;
        cout << "Constructor called\n";
    }

    // Deep Copy Constructor
    Time(const Time &obj) {
        ptr = new int;            // Allocate new memory
        *ptr = *(obj.ptr);        // Copy value, not address
        cout << "Copy constructor called (Deep Copy)\n";
    }

    // Assignment Operator Overload (Deep Copy)
    Time& operator=(const Time &obj) {
        if (this != &obj) {       // Avoid self-assignment
            delete ptr;           // Delete old memory
            ptr = new int;        // Allocate new memory
            *ptr = *(obj.ptr);    // Copy value
        }
        cout << "Assignment operator called (Deep Copy)\n";
        return *this;
    }

    // Destructor
    ~Time() {
        delete ptr;
        cout << "Destructor called\n";
    }
};

int main() {
    Time t1(10);
    Time t2 = t1;   // Deep copy constructor
    Time t3(50);
    t3 = t1;        // Deep copy assignment operator

    cout << "\nt1.ptr = " << t1.ptr << endl;
    cout << "t2.ptr = " << t2.ptr << endl;
    cout << "t3.ptr = " << t3.ptr << endl;

    return 0;
}
