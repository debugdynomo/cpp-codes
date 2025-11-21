//assignment operator
#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int v=0): x(v) {}
    Num& operator=(int v) { x = v; return *this; }
    Num& operator+=(Num& obj) { x += obj.x; return *this; }
    Num& operator-=(Num& obj) { x -= obj.x; return *this; }
    Num& operator*=(Num& obj) { x *= obj.x; return *this; }
    Num& operator/=(Num& obj) { x /= obj.x; return *this; }
    Num& operator%=(Num& obj) { x %= obj.x; return *this; }
    Num& operator^=(Num& obj) { x ^= obj.x; return *this; }
    Num& operator&=(Num& obj) { x &= obj.x; return *this; }
    Num& operator|=(Num& obj) { x |= obj.x; return *this; }
    Num& operator<<=(int s) { x <<= s; return *this; }
    Num& operator>>=(int s) { x >>= s; return *this; }
    int val() { return x; }
};

int main() {
    Num a(5), b(2);
    a += b; a *= b; a <<= 1;
    cout << a.val() << "\n";
}