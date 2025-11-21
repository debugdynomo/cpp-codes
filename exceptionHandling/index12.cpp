#include <iostream>
#include <exception>
using namespace std;

void myTerminate() {
    cout << "Custom terminate() called!" << endl;
    exit(1);
}

void myUnexpected() {
    cout << "Custom unexpected() called!" << endl;
    throw 10;   // but fun() allows only char → terminate() called next
}

void fun() throw(char) {
    throw 3.14;    // not allowed → unexpected()
}

int main() {
    set_terminate(myTerminate);
    set_unexpected(myUnexpected);

    fun();
}