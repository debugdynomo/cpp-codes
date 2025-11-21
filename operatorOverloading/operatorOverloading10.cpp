#include <bits/stdc++.h>
using namespace std;

class Complex {
    int a,b;
    public:
        Complex(int x,int y) {
            this->a = x;
            this->b = y;
        }

        friend ostream &operator<<(ostream &os,Complex &obj);
        friend istream &operator<<(istream &is,Complex &obj);

        ~Complex(){}
};

ostream &operator<<(ostream &os,Complex &obj) {
    os << obj.a << "+" << obj.b << "i";
    return os;
}
istream &operator<<(istream &is,Complex &obj) {
    is >> obj.a >> obj.b ;
    return is;
}

int main() {
    cout << "Start" << "\n";
    Complex z1(2,3),z2(4,5);

    cout << "Z1: " << z1 << "\n";
    cout << "Z2: " << z2 << "\n";
    return 0;
}