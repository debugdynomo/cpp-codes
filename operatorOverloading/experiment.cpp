#include <bits/stdc++.h>
using namespace std;

class Complex {
    int a,b;
    public:
        Complex(int a = 0,int b = 0) {
            this->a = a;
            this->b = b;
            cout << "Complex object is created" << "\n";
        }

        Complex operator+(Complex &z) {
            return Complex(this->a + z.a,this->b + z.b);
        }
        
        Complex &operator+=(Complex &z) {
            this->a += z.a;
            this->b += z.b;

            return *this;
        }

        bool operator==(Complex &z) {
            return (this->a == z.a) && (this->b == z.b);
        }

        Complex operator++(){//prefix increment
            Complex temp = *this;
            ++(this->a);++(this->b);

            return temp;
        }

        Complex &operator++(int){//postfix increment
            this->a++;
            this->b++;

            return *this;
        }

        Complex operator-() {
            return Complex(-this->a,-this->b);
        }

        Complex &operator=(Complex &z) {
            this->a = z.a;
            this->b = z.b;

            return *this;
        }

        friend ostream& operator<<(ostream &os,Complex &z);
        friend istream& operator>>(istream &os,Complex &z);

        void* operator new(size_t sz) {
            return malloc(sz);
        }
        void operator delete(void* p) {
            free(p);
            return;
        }

        ~Complex() {
            cout << "Resources are freed" << "\n";
        }
};

ostream& operator<<(ostream &os,Complex &z) {
    os << z.a << " + " << z.b << "i";
    return os;
}
istream& operator>>(istream &is,Complex &z) {
    is >> z.a >> z.b;
    return is;
}

int main() {
    Complex c1(10,20);
    Complex c2(100,200);


    return 0;
}