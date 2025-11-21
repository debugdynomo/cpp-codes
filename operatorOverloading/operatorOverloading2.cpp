//logical operator
#include <iostream>
using namespace std;

class Flag {
    bool v;
public:
    Flag(bool b): v(b) {}
    bool operator!() { return !v; }
    bool operator&&(Flag& obj) { return v && obj.v; }
    bool operator||(Flag& obj) { return v || obj.v; }
};

int main() {
    Flag t(true), f(false);
    cout << (t && f) << " " << (t || f) << " " << (!t) << "\n";
}