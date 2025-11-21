#include <iostream>
using namespace std;

void func() {
    cout << "Inside func(), throwing 100\n";
    throw 100;   // new exception
}

int main() {
    try {
        try {
            cout << "Throwing 10\n";
            throw 10;     // first exception
        }
        catch (int x) {
            cout << "Inner catch caught: " << x << endl;
            func();       // func() throws 100
        }

        cout << "This line will NOT execute\n"; // unreachable
    }
    catch (int y) {
        cout << "Outer catch caught: " << y << endl;
    }

    cout << "Program continues normally\n";
    return 0;
}
