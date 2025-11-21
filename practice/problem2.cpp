#include <bits/stdc++.h>
using namespace std;

class Number {
    public:
        int num;
        Number(int num) {
            this->num = num;
        }  

        friend void swapnumber(Number a,Number b);

        Number &operator-() {
            this->num = -num;
            return *this;
        }

        ~Number() {
            cout << "Resources are freed" << "\n";
        }
};

void swapnumber(Number a,Number b) {
    a.num = a.num + b.num;
    b.num = a.num - b.num;
    a.num = a.num - b.num;
    return;
}

int main() {
    Number a(10),b(20);

    cout << "Before swap: " << a.num << " " << b.num << "\n";
    swapnumber(a,b);
    cout << "After swap: " << a.num << " " << b.num << "\n";

    a = -a;

    cout << "unary operator: " << a.num << "\n";
    return 0;
}