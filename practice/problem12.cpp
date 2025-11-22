#include <bits/stdc++.h>
using namespace std;

class A {
public:
    A(int x) { cout << "A: " << x << endl; }
};

class B {
public:
    B(int y) { cout << "B: " << y << endl; }
};

class C : public B, public A {
public:
    C(int x, int y, int z) : B(y) , A(x) {  // Must call both
        cout << "C: " << z << endl;
    }
};

int main() {
    C obj(10, 20, 30);
}
