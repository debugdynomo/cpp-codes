#include <iostream>
using namespace std;

int square(int x) {
    cout << "Regular function\n";
    return x * x;
}

template <typename T>
T square(T x) {
    cout << "Template function\n";
    return x * x;
}

int main() {
    square(5);     // calls the normal function
    square(2.5);   // calls the template (no normal double version)
}