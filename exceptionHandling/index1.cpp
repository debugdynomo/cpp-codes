#include <iostream>
using namespace std;
// Localize a try/catch to a function.
int Xhandler(int test){
    try{
        if(test) throw test;
    }
    catch(int i) {
        cout << "Caught Exception #: " << i << '\n';
    }
    cout << "this is from outside catch block" << "\n";
    return test;
}
int main() {
    cout << "Start\n";
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    Xhandler(3);
    cout << "End";
    return 0;
}