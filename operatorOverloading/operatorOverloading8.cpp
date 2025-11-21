//comma operator
#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int v): x(v) {}
    Num operator,(const Num& o) { return Num(o.x); }
    int val() const { return x; }
};

int main() {
    Num a(1), b(2), c(3);
    Num r = (a, b, c);
    cout << r.val() << "\n";
}