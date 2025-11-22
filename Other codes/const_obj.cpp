#include <bits/stdc++.h>
using namespace std;

class Test {
    int x;
public:
    Test(int a = 0) : x(a) {}   // default constructor with initialization
    void setX(int a) { x = a; }
    int getX() const { return x; }
};

int main() {
    const Test obj(5);  // properly initialized
    // obj.setX(10);    // ❌ can't call non-const
    cout << obj.getX(); // ✔ OK
}
