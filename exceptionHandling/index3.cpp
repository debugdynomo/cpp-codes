// #include <iostream>
// #include <string>
// using namespace std;

// class MyException {
// public:
//     string str_what;
//     int what;

//     MyException() : str_what(""), what(0) {}

//     MyException(const string& s, int e) : str_what(s), what(e) {}
// };

// int main() {
//     int i;
//     try {
//         cout << "Enter a positive number: ";
//         cin >> i;
//         if (i < 0) {
//             throw MyException("Not Positive", i);
//         }
//         cout << "You entered: " << i << endl;
//     }
//     catch (const MyException& e) { // catch by reference
//         cout << e.str_what << ": " << e.what << "\n";
//     }
//     return 0;
// }

#include <iostream>
#include <cstring>   // for strcpy
using namespace std;

class MyException {
public:
    char str_what[80];  // fixed-size char array
    int what;

    MyException() {
        str_what[0] = '\0'; // initialize empty string
        what = 0;
    }

    MyException(const char* s, int e) {
        // copy safely into char array
        strncpy(str_what, s, sizeof(str_what) - 1);
        str_what[sizeof(str_what) - 1] = '\0'; // ensure null termination
        what = e;
    }
};

int main() {
    int i;
    try {
        cout << "Enter a positive number: ";
        cin >> i;
        if (i < 0) {
            throw MyException("Not Positive", i);
        }
        cout << "You entered: " << i << endl;
    }
    catch (const MyException& e) { // catch by reference
        cout << e.str_what << ": " << e.what << "\n";
    }
    return 0;
}