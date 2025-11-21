#include <iostream>
using namespace std;

class Inner {
public:
    int val;
    Inner(int v): val(v) {}
};

class Obj {
    Inner inner;
public:
    Obj(int v): inner(v) {}
    Inner* operator->() { return &inner; }
    Inner& operator*() { return inner; }
};

int main() {
    Obj o(42);

    cout << (*o).val << "\n";
    cout << o->val << "\n";

    return 0;
}