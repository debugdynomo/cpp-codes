#include <iostream>
using namespace std;

class A {
public:
    A(int x) { cout << "A Constructor: " << x << endl; }
    ~A() { cout << "A Destructor" << endl; }
};

class B : virtual public A {
public:
    B(int x, int y) : A(x) {   // A(x) called but ignored due to virtual
        cout << "B Constructor: " << y << endl;
    }
    ~B() { cout << "B Destructor" << endl; }
};

class C : virtual public A {
public:
    C(int x, int z) : A(x) {   // A(x) also ignored due to virtual
        cout << "C Constructor: " << z << endl;
    }
    ~C() { cout << "C Destructor" << endl; }
};

class D : public B, public C {
public:
    D(int a, int b, int c, int d) : A(a), B(a, b), C(a, c) {
        cout << "D Constructor: " << d << endl;
    }
    ~D() { cout << "D Destructor" << endl; }
};

int main() {
    D obj(10, 20, 30, 40);
}
