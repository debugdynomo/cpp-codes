// Restricting function throw types.
#include <iostream>
using namespace std;
// This function can only throw ints, chars, and doubles.
int Xhandler(int test) throw(int, char, double) {
    if(test==0) throw test; // throw int
    if(test==1) throw 'a'; // throw char
    if(test==2) throw 123.23; // throw double
    cout << "Exit from function" <<"\n";//!control flow goes to nearest catch block when throw is executed,
    //! and these statements are execute in normal conditions only in this case;
    return test;
}
int main() {
    cout << "start\n";
    try{
        Xhandler(0); // also, try passing 1 and 2 to Xhandler()
    }
    catch(int i) {
        cout << "Caught an integer\n";
    }
    catch(char c) {
        cout << "Caught char\n";
    }
    catch(double d) {
        cout << "Caught double\n";
    }
    cout << "end";
    return 0;
}