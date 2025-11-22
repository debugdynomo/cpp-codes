#include <iostream>
using namespace std;

class Fibonacci {
private:
    int a, b;  // Previous two Fibonacci numbers

public:
    Fibonacci() : a(1), b(0) {}  // Starting values

    // Overload prefix ++ to generate next Fibonacci number
    Fibonacci& operator++() {
        int next = a + b; // Next term
        a = b;           // Move forward
        b = next;
        return *this;    // Return updated object
    }

    void show() {
        cout << b << " ";
    }
};

int main() {
    Fibonacci f;

    cout << "Fibonacci Series: ";
    
    for(int i = 0; i < 10; i++) {
        ++f;   // Prefix operator to generate next number
        f.show();
    }
}
