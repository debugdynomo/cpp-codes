#include <iostream>
using namespace std;

class Test {
public:
    ~Test() {
        cout << "Destructor called" << endl;
        throw 20;       // ❌ Throw inside destructor
    }
};

int main() {
    try {
        Test t;
        throw 10;       // Start stack unwinding
    }
    catch (int x) {
        cout << "Caught: " << x << endl;
    }
}
/*
✅ First exception starts unwinding
✅ Destructor runs
❌ Destructor throws → terminate()
*/