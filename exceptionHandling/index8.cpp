// Example of "rethrowing" an exception.
#include <iostream>
using namespace std;
void Xhandler() {
    try {
        throw string("hello"); // throw a char *
    }
    catch(const string& s) { // catch a char *
        cout << "Caught char * inside Xhandler\n";
        throw ; // rethrow char * out of function
    }
}
int main() {
    cout << "Start\n";
    try{
        Xhandler();
    }
    catch(const string& s) {
        cout << "Caught char * inside main\n";
    }
    catch(...) {
        cout << "Caught by safe catch block with ..." <<"\n";
    }
    cout << "End";
    return 0;
}