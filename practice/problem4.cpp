#include <bits/stdc++.h>
using namespace std;

class Complex {
    int a,b;
    public: 
        Complex(int a = 0,int b = 0) {
            this->a = a;
            this->b = b;
        }

        Complex(Complex &x) {
            cout << "Object is copied" << "\n";
            this->a = x.a;
            this->b = x.b;
        }

        Complex &operator=(Complex &x) {
            this->a = x.a;
            this->b = x.b;
            cout << "assignment is called" << "\n";

            return *this;
        }

        void display() {
            cout << this->a << " + " << this->b << "i" << "\n";
        }

        ~Complex() {
            cout << "Resources are freed" << "\n";
        }
};

int main() {
    Complex z1(10,20);
    Complex z2 = z1; //copy constructor is called
    Complex z3;
    z3 = z2; //assignment is used

    cout << "z1: ";
    z1.display();
    cout << "z2: ";
    z2.display();
    cout << "z3: ";
    z3.display();
    return 0;
}