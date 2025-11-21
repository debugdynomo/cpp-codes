#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    try {
        cout << "Inside try block" << "\n";
        if(a) {
            throw 500;
        }
        cout << "After throw statements, if condition is false" << "\n";
    }
    catch(...) {
        cout << "ERROR CODE: " << "\n";
    }
    cout << "end" << "\n";
    return 0;
}